
undefined8 FUN_004451c0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  
  lVar1 = param_1 + 0x1b8;
  lVar2 = param_1 + 0xc0;
  lVar3 = param_1 + 0x2b0;
  param_3 = param_3 * 8;
  if ((DAT_0094b59c._1_1_ & 2) == 0) {
    FUN_00552470(lVar3);
    FUN_0048a5f0(param_2,param_3,lVar2);
    FUN_0048a8b0(param_2,param_3,lVar1);
    pcVar6 = FUN_0048a530;
    pcVar5 = FUN_00489fa0;
  }
  else {
    FUN_00552470(lVar3);
    FUN_0049c630(param_2,param_3,lVar2);
    FUN_0049c660(param_2,param_3,lVar1);
    pcVar6 = FUN_0049c6c0;
    pcVar5 = FUN_0049c6a0;
  }
  iVar4 = FUN_005516a0(lVar3,lVar2,lVar1,pcVar5,pcVar6,0);
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
    return 1;
  }
  return 0;
}

