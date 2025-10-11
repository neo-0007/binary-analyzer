
void FUN_0051f540(char *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_0051e1a0();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x380);
    lVar1 = lVar3 + (long)iVar2 * 8;
    FUN_0041ad60(*(undefined8 *)(lVar1 + 0x240),"../crypto/err/err_local.h",0x38);
    if (param_1 != (char *)0x0) {
      if (*param_1 == '\0') {
        param_1 = (char *)0x0;
      }
      else {
        param_1 = (char *)FUN_0041c2c0(param_1,"../crypto/err/err_local.h",0x3c);
      }
    }
    *(char **)(lVar1 + 0x240) = param_1;
    *(undefined4 *)(lVar3 + 0x2c0 + (long)iVar2 * 4) = param_2;
    FUN_0041ad60(*(undefined8 *)(lVar1 + 0x300),"../crypto/err/err_local.h",0x3e);
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      uVar4 = FUN_0041c2c0(param_3,"../crypto/err/err_local.h",0x42);
      *(undefined8 *)(lVar1 + 0x300) = uVar4;
      return;
    }
    *(undefined8 *)(lVar1 + 0x300) = 0;
  }
  return;
}

