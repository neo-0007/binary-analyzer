
int FUN_004de580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00405f40();
  if (lVar2 != 0) {
    lVar3 = FUN_004069d0(param_1,"SHAKE256",param_5);
    if (((lVar3 == 0) || (iVar1 = FUN_00407430(lVar2,lVar3,0), iVar1 == 0)) ||
       (iVar1 = FUN_00405f60(lVar2,param_4,0x39), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004062e0(lVar2,param_2,param_3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    FUN_00406b90(lVar2);
    FUN_00406a50(lVar3);
    return iVar1;
  }
  return 0;
}

