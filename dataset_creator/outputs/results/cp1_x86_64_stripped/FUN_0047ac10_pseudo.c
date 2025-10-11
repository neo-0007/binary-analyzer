
bool FUN_0047ac10(undefined8 *param_1,undefined1 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_3c [12];
  
  puVar1 = param_1 + 5;
  uVar3 = *param_1;
  local_3c[0] = param_2;
  iVar4 = FUN_0053f310(uVar3,puVar1,param_1[4],0);
  if (iVar4 != 0) {
    puVar2 = param_1 + 0xd;
    iVar4 = FUN_0053f330(uVar3,puVar2,param_1[4]);
    if ((((((iVar4 != 0) && (iVar4 = FUN_0053f330(uVar3,local_3c,1), iVar4 != 0)) &&
          ((param_3 == 0 ||
           ((param_4 == 0 || (iVar4 = FUN_0053f330(uVar3,param_3,param_4), iVar4 != 0)))))) &&
         ((param_5 == 0 ||
          ((param_6 == 0 || (iVar4 = FUN_0053f330(uVar3,param_5,param_6), iVar4 != 0)))))) &&
        (((param_7 == 0 ||
          ((param_8 == 0 || (iVar4 = FUN_0053f330(uVar3,param_7,param_8), iVar4 != 0)))) &&
         (iVar4 = FUN_0053f650(uVar3,puVar1,0,0x40), iVar4 != 0)))) &&
       ((iVar4 = FUN_0053f310(uVar3,puVar1,param_1[4],0), iVar4 != 0 &&
        (iVar4 = FUN_0053f330(uVar3,puVar2,param_1[4]), iVar4 != 0)))) {
      iVar4 = FUN_0053f650(uVar3,puVar2,0,0x40);
      return iVar4 != 0;
    }
  }
  return false;
}

