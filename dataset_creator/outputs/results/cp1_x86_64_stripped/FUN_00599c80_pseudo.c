
void FUN_00599c80(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if ((param_4 == 0) || (iVar1 = FUN_00436480(param_2), iVar1 == 0)) {
      FUN_004ae9e0(param_1,"%*s",param_3,&DAT_0083e5c2);
      iVar1 = FUN_00436480(param_2);
      if (iVar1 == 0) {
        FUN_004ab870(param_1,"<EMPTY>\n");
      }
    }
    for (iVar1 = 0; iVar2 = FUN_00436480(param_2), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      if (param_4 == 0) {
        if (iVar1 != 0) {
          FUN_004ae9e0(param_1,&DAT_00801fb4);
        }
      }
      else {
        if (iVar1 != 0) {
          FUN_004ae9e0(param_1,&DAT_008243ea);
        }
        FUN_004ae9e0(param_1,"%*s",param_3,&DAT_0083e5c2);
      }
      lVar3 = FUN_004364a0(param_2,iVar1);
      if (*(long *)(lVar3 + 8) == 0) {
        FUN_004ab870(param_1,*(undefined8 *)(lVar3 + 0x10));
      }
      else if (*(long *)(lVar3 + 0x10) == 0) {
        FUN_004ab870(param_1,*(long *)(lVar3 + 8));
      }
      else {
        FUN_004ae9e0(param_1,"%s:%s");
      }
    }
    return;
  }
  return;
}

