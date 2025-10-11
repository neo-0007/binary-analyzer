
void FUN_00622650(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)thunk_FUN_006e8f20("CTLOG_FILE");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "/usr/lib/ssl/ct_log_list.cnf";
  }
  FUN_006224b0(param_1,pcVar1);
  return;
}

