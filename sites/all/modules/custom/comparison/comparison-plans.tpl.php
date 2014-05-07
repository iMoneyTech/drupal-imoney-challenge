<?php
/**
 * @file
 * Theme implementation to display comparison table.
 */
?>

<div ng-app="planlist">
  <div ng-view></div>
</div>


<!--
<section id="comparison-table">
  <table class="table-mobilephone table-darkblue-th tablesorter" cellpadding="0" cellspacing="0" border="0">
    <thead>
      <tr>
        <th data-column="0" class="tablesorter-header" 
            ng-class="{'tablesorter-headerAsc' : isSortUp('phoneModel'), 'tablesorter-headerDesc' : isSortDown('phoneModel')}" 
            ng-click="changeSorting('phoneModel')">
          <div class="tablesorter-header-inner">Device</div>
        </th>
        <th data-column="1" class="tablesorter-header" ng-class="{'tablesorter-headerAsc' : isSortUp('mobileCapacity'), 'tablesorter-headerDesc' : isSortDown('mobileCapacity')}" ng-click="changeSorting('mobileCapacity')">
          <div class="tablesorter-header-inner">Model</div>
        </th>
        <th data-column="2" class="tablesorter-header tablesorter-headerAsc" ng-class="{'tablesorter-headerAsc' : isSortUp('monthlyPayment'), 'tablesorter-headerDesc' : isSortDown('monthlyPayment')}" ng-click="changeSorting('monthlyPayment')">
        <div class="tablesorter-header-inner">Monthly Commitment</div>
        </th>
        <th data-column="3" class="tablesorter-header" ng-class="{'tablesorter-headerAsc' : isSortUp('phonePrice'), 'tablesorter-headerDesc' : isSortDown('phonePrice')}" ng-click="changeSorting('phonePrice')">
        <div class="tablesorter-header-inner">Phone Price</div>
        </th>
        <th data-column="4" class="tablesorter-header" ng-class="{'tablesorter-headerAsc' : isSortUp('freeDataFloat'), 'tablesorter-headerDesc' : isSortDown('freeDataFloat')}" ng-click="changeSorting('freeDataFloat')">
        <div class="tablesorter-header-inner">Plan Includes</div>
        </th>
        <th data-column="5" class="tablesorter-header" ng-class="{'tablesorter-headerAsc' : isSortUp('ownershipCost'), 'tablesorter-headerDesc' : isSortDown('ownershipCost')}" ng-click="changeSorting('ownershipCost')">
        <div class="tablesorter-header-inner">Cost of Ownership</div>
        </th>
        <th data-column="6" class="apply-col">More Info</th>
        </tr>
    </thead>
    <tbody>
      <tr ng-repeat="mobilePlan in mobilePlans | orderBy:sort.column:sort.descending" 
          ng-show="([mobilePlan] | filter:filterCondition).length &gt; 0" class="ng-scope">
        <td>
          <img src="http://v2.imoney.my/sites/default/files/styles/mobile_plan_comparison_page_logo/public/
               new-samsung-galaxy-s5.jpg?itok=NPTjHVMu" alt="Samsung Galaxy S5">
        </td>
        <td>
          <h4 class="ng-binding mb0 fw400">Samsung Galaxy S5</h4>
          <span class="extra-info ng-binding">16GB</span>
        </td>
        <td>
          <strong class="color-complement font-lg ng-binding">RM28</strong>
          <span class="extra-info ng-binding">Maxis TalkMore28</span>
        </td>
        <td><strong class="font-lg ng-binding">RM1,999</strong></td>
        <td>
          <strong class="font-lg ng-binding" data="0">0GB</strong>
          <span class="extra-info db ng-binding">100 SMS<br> 200 mins</span>
        </td>
        <td>
          <p class="font-lg color-darkblue mb0 bold ng-binding">RM2,335</p>
          <span class="extra-info db mb10 ng-binding">12 Months</span>
        </td>
        <td class="apply-col" ng-click="apply(mobilePlan.phone[0].url, mobilePlan.phone[0].nid)">
          <a href="#inline-popup" class="fd-btn-moreinfo btn btn-success track" data-category="All_Mobile_Compare" 
             data-action="Ext_Click" data-label="Postpaid - Samsung Galaxy S5 - 12">More info</a>
        </td>
      </tr>
    </tbody>
  </table>
</section>-->