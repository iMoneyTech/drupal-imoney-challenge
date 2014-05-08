var Draggable = function () {

    return {
        restrict: "A",
        link: function(scope, element, attributes, ctlr) {
            element.attr("draggable", true);

            element.bind("dragstart", function(eventObject) {
                eventObject.originalEvent.dataTransfer.setData("text", attributes.itemid);
            });
        }
    };
}
var DropTarget= function () {

    return {
        restrict: "A",
        
        link: function (scope, element, attributes, ctlr) {

            element.bind("dragover", function(eventObject){
                eventObject.preventDefault();
            });

            element.bind("drop", function(eventObject) {
                
                // invoke controller/scope move method
                scope.moveToBox(parseInt(eventObject.originalEvent.dataTransfer.getData("text")));

                // cancel actual UI element from dropping, since the angular will recreate a the UI element
                eventObject.preventDefault();
            });
        }
    };
}

var planList = angular.module('planList', []).directive("ddDraggable", Draggable).directive("ddDropTarget", DropTarget);

planList.controller('PlanListCtrlAdvanced', ['$scope', function($scope){

  $scope.mobileplans = JSON.parse(Drupal.settings.comparison.plans);    
   
  $scope.dropped = [];

  $scope.moveToBox = function(id) {
    for (var index = 0; index < $scope.mobileplans.length; index++) {
      var item = $scope.mobileplans[index];
      if (item.field_id == id) {
          // add to dropped array
          $scope.dropped.push(item);
          //TODO: Did not find any unique key of plan. First occurance is selected, need to be fixed.
          break;
      }
    }
    $scope.$apply();
  };  
}]);




