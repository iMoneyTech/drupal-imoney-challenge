<?php
/**
 * @file
 * Theme implementation to display comparison table.
 */
?>
<div ng-controller="PlanListCtrl">
  
  <br />
  Name: <input ng-model="search.name">
  Device: <input ng-model="search.mobile_plan_phone_array.field_mobile_device">
  <table>
    <thead>
      <tr>
        <th>Plan image</th>
        <th>Name</th>
        <th>Free call</th>
        <th>Free Data</th>
        <th>Free SMS</th>
        <th>Phone info</th>
      </tr>
    </thead>
    <tbody>
      <tr ng-repeat="mobileplan in mobileplans|filter:search.name |filter:search.mobile_plan_phone_array.field_mobile_device">
        <td><img src="{{mobileplan.field_plan_image}}" alt="{{mobileplan.field_plan_image_alter}}" /></td>
        <td>{{mobileplan.name}}</td>
        <td>{{mobileplan.field_free_call}}</td>
        <td>{{mobileplan.field_free_data}}</td>
        <td>{{mobileplan.field_free_sms}}</td>
        <td>
          <ul>
            <li ng-repeat="mobile_plan_phone in mobileplan.mobile_plan_phone_array">
              Contract period: {{mobile_plan_phone.field_contract_period}}<br/>
              Capacity: {{mobile_plan_phone.field_mobile_capacity}}<br/>
              Device: {{mobile_plan_phone.field_mobile_device}}<br/>
              Telco name: {{mobile_plan_phone.field_telco_name}}<br/>
            </li>
          <ul>
        </td>
      </tr>
    </tbody>
  </table>

</div>

