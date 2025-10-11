
void FUN_00595cd0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 5) & 2) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
    }
    FUN_00436430(param_1[1],FUN_00595890);
    FUN_00419990(0xb,param_1,param_1 + 3);
    FUN_00422300(param_1[6]);
    FUN_0041ad60(param_1,"../crypto/ui/ui_lib.c",0x53);
    return;
  }
  return;
}

