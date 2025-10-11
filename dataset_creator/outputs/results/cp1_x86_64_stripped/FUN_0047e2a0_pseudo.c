
undefined8
FUN_0047e2a0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[1];
  iVar2 = FUN_0043b840();
  if ((iVar2 != 0) && (param_3 == 0x72)) {
    uVar3 = FUN_004dedd0(*param_1,param_4,param_5,param_2,lVar1 + 0x11,0,0,
                         *(undefined8 *)(lVar1 + 8));
    return uVar3;
  }
  return 0;
}

