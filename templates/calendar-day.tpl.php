<?php
// $Id: calendar-dayspanned.tpl.php,v 1.7.2.6 2008/11/19 12:35:40 karens Exp $
/**
 * @file
 * Template to display a view as a calendar day, grouped by time
 * and optionally organized into columns by a field value.
 * 
 * @see template_preprocess_calendar_dayspanned.
 *
 * $rows: The rendered data for this day.
 * $rows['date'] - the date for this day, formatted as YYYY-MM-DD.
 * $rows['datebox'] - the formatted datebox for this day.
 * $rows['empty'] - empty text for this day, if no items were found.
 * $rows['all_day'] - an array of formatted all day items.
 * $rows['items'] - an array of timed items for the day.
 * $rows['items'][$time_period]['hour'] - the formatted hour for a time period.
 * $rows['items'][$time_period]['ampm'] - the formatted ampm value, if any for a time period.
 * $rows['items'][$time_period][$column]['values'] - An array of formatted 
 *   items for a time period and field column.
 * 
 * $view: The view.
 * $columns: an array of column names.
 * $min_date_formatted: The minimum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * $max_date_formatted: The maximum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * 
 * The width of the columns is dynamically set using <col></col> 
 * based on the number of columns presented. The values passed in will
 * work to set the 'hour' column to 10% and split the remaining columns 
 * evenly over the remaining 90% of the table.
 */
//print 'Display: '. $display_type .': '. $min_date_formatted .' to '. $max_date_formatted;
//dsm($columns);
//dsm($rows);
?>

<div class="calendar-calendar"><div class="day-view">
<table>
  <thead>
    <col width="10%"></col>
    <?php foreach ($columns as $column): ?>
    <col width="<?php print $column_width; ?>%"></col>
    <?php endforeach; ?>
    <tr>
      <th class="calendar-dayview-hour"><?php print t('Time'); ?></th>
      <?php foreach ($header_columns as $column): ?>
      <th class="calendar-agenda-items" <?php print ($column['span'] > 0) ? 'colspan='. $column['span']:''; ?> >
        <?php print $column['title']; ?>
      </th>
      <?php endforeach; ?>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td class="calendar-agenda-hour">
         <span class="calendar-hour"><?php print t('All day'); ?></span>
       </td>
      <?php foreach ($header_columns as $key => $column): ?>
       <td class="calendar-agenda-items" <?php print ($column['span'] > 0)?'colspan='. $column['span']:''; ?> >
         <div class="calendar">
         <div class="inner">
           <?php print isset($rows['all_day'][$key]['value']) ? implode($rows['all_day'][$key]['value']) : '&nbsp;';?>
         </div>
         </div>
       </td>
      <?php endforeach; ?>   
    </tr>
    <?php foreach ($rows['items'] as $hour): ?>
    <tr>
      <td class="calendar-agenda-hour">
        <span class="calendar-hour"><?php print $hour['hour']; ?></span>
        <span class="calendar-ampm"><?php print $hour['ampm']; ?></span>
      </td>
      <?php foreach ($columns as $column): ?>
        <?php if($hour['values'][$column] != '***busy***') : ?>
          <td class="calendar-agenda-items <?php print ($hour['values'][$column])?'calendar-has-item':'';  ?>" <?php print isset($hour['span'][$column]) ? "rowspan=".$hour['span'][$column] : ""; ?> >
            <div class="calendar">
              <div class="inner">
                <?php print isset($hour['values'][$column]) ? $hour['values'][$column] : '&nbsp;'; ?>
              </div>
            </div>
          </td>
        <?php endif; ?>
      <?php endforeach; ?>   
    </tr>
   <?php endforeach; ?>   
  </tbody>
</table>
</div></div>