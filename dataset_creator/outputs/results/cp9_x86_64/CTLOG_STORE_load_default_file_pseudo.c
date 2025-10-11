
void CTLOG_STORE_load_default_file(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)ossl_safe_getenv("CTLOG_FILE");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "/usr/lib/ssl/ct_log_list.cnf";
  }
  CTLOG_STORE_load_file(param_1,pcVar1);
  return;
}

