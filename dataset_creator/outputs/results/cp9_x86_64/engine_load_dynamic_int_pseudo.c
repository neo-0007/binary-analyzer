
void engine_load_dynamic_int(void)

{
  int iVar1;
  ENGINE *e;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  iVar1 = ENGINE_set_id(e,"dynamic");
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(e,"Dynamic engine loading support");
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_init_function(e,dynamic_init);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_finish_function(e,dynamic_finish);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_ctrl_function(e,dynamic_ctrl);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_flags(e,4);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_cmd_defns(e,(ENGINE_CMD_DEFN *)dynamic_cmd_defns);
              if (iVar1 != 0) {
                ERR_set_mark();
                ENGINE_add(e);
                ENGINE_free(e);
                ERR_pop_to_mark();
                return;
              }
            }
          }
        }
      }
    }
  }
  ENGINE_free(e);
  return;
}

