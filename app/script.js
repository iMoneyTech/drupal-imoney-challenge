//Variables
var endpoint =  'http://127.0.0.1:8001/im/';

//module
var app = angular.module('iMoneyApp', ['ngRoute']);

//routes
app.config(function($routeProvider) {
  $routeProvider

    // route for the home page
    .when('/', {
      templateUrl : 'pages/home.html',
      controller  : 'mainController'
    })

    // route for the telcos page
    .when('/telcos', {
      templateUrl : 'pages/telcos.html',
      controller  : 'telcosController'
    })

    // route for the phones page
    .when('/phones', {
      templateUrl : 'pages/phones.html',
      controller  : 'phonesController'
    })

    // route for the phones page
    .when('/phones/:id/:name', {
      templateUrl : 'pages/phones.html',
      controller  : 'phonesController'
    })

    // route for the mobile plans page
    .when('/plans', {
      templateUrl : 'pages/plans.html',
      controller  : 'plansController'
    })

    // route for the mobile plans page
    .when('/plans/:id/:name', {
      templateUrl : 'pages/plans.html',
      controller  : 'plansController'
    });
});

// Bypass CORS
app.config(function($httpProvider) {
  //$httpProvider.defaults.useXDomain = true;
  //delete $httpProvider.defaults.headers.common['X-Requested-With'];
});

//controllers
app.controller('mainController', function($scope, $http, $route, $routeParams) {
  $scope.loading = true;

  $http.get(endpoint + 'search').success(function(data) {
    //console.log(data);
    $scope.results = data.nodes;
    $scope.loading = false;
  }).error(function(error) {});

  $scope.header = 'Welcome';

  $scope.filterForm = {}
  $scope.filterForm.telco = 0;
  $scope.filterForm.phone = 0;
  // form submit function
  $scope.filterForm.submitForm = function(item, event) {

    var config = { params : {}} // filter params
    if($scope.filterForm.telco != 0){
      config.params.telco = $scope.filterForm.telco;
    }

    if($scope.filterForm.phone != 0){
      config.params.phone = $scope.filterForm.phone;
    }


    $http.get(endpoint + 'search', config).success(function(data) {
      //console.log(data.nodes);
      $scope.results = data.nodes;
      $scope.loading = false;
    }).error(function(error) {});
  }
});

app.controller('telcosController', function($scope, $http) {

  $scope.loading = true;

  $http.get(endpoint + 'telcos').success(function(data) {
    //console.log(data.nodes);
    $scope.telcos = data.nodes;
    $scope.loading = false;
  }).error(function(error) {});

  $scope.header = 'Telcos';
});

app.controller('phonesController', function($scope, $http, $route, $routeParams) {
  var resource = '';
  $scope.loading = true;

  if(typeof $routeParams.id !== 'undefined' && $routeParams.id !== null){
    resource = 'phones/'+ $routeParams.id;
    $scope.header = $routeParams.name + ' - Phones';
  }
  else {
    resource = 'phones';
    $scope.header = 'Phones';
  }

  $http.get(endpoint + resource).success(function(data) {
    //console.log(data.nodes);
    $scope.phones = data.nodes;
    $scope.loading = false;
  }).error(function(error) {});


});


app.controller('plansController', function($scope, $http, $route, $routeParams) {
  var resource = '';
  $scope.loading = true;

  if(typeof $routeParams.id !== 'undefined' && $routeParams.id !== null){
    resource = 'plans/'+ $routeParams.id;
    $scope.header = 'Mobile Plans - ' + $routeParams.name;
  }
  else {
    resource = 'plans';
    $scope.header = 'Mobile Plans';
  }

  $http.get(endpoint + resource).success(function(data) {
    //console.log(data);
    $scope.plans = data.nodes;
    $scope.loading = false;
  }).error(function(error) {});

});
