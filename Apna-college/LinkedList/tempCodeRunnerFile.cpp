  int process[4];
  int burst_time[4];
  int waiting_time[4];
  int completion_time[4];
  int turn_around_time[4];
  int arrival_time[4];
  burst_arrival_time(process,burst_time,arrival_time);
  sort_arrival_time( process, burst_time, arrival_time);
  sort_burst_time(process, burst_time, arrival_time);
  sjf_operationn( arrival_time, burst_time, turn_around_time,completion_time, waiting_time);
  print_table( process, arrival_time, burst_time, turn_around_time,
completion_time, waiting_time);