
void __nss_database_get(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = global_database_state;
  if (global_database_state == 0) {
    lVar1 = __libc_allocate_once_slow(&global_database_state,global_state_allocate,0,0);
  }
  nss_database_check_reload_and_get(lVar1,param_2,param_1);
  return;
}

