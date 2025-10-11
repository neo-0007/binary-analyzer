
undefined8 UI_dup_user_data(UI *param_1)

{
  code *pcVar1;
  void *user_data;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x30);
  if ((pcVar1 != (code *)0x0) && (*(long *)(*(long *)param_1 + 0x38) != 0)) {
    user_data = (void *)(*pcVar1)();
    if (user_data != (void *)0x0) {
      UI_add_user_data(param_1,user_data);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      return 0;
    }
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x1a0,"UI_dup_user_data");
    ERR_set_error(0x28,0xc0100,0);
    return 0xffffffff;
  }
  ERR_new();
  ERR_set_debug("../crypto/ui/ui_lib.c",0x19a,"UI_dup_user_data");
  ERR_set_error(0x28,0x70,0);
  return 0xffffffff;
}

