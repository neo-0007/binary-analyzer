
undefined8 FUN_00607ea0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  
  iVar2 = param_3 + 0xe;
  if (-1 < param_3 + 7) {
    iVar2 = param_3 + 7;
  }
  puVar4 = (undefined4 *)FUN_00607e60();
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  lVar5 = *(long *)(puVar4 + 2);
  *puVar4 = 0;
  if (lVar5 == 0) {
    lVar5 = FUN_004a7820();
    *(long *)(puVar4 + 2) = lVar5;
    if (lVar5 == 0) goto LAB_00607f75;
  }
  iVar3 = thunk_FUN_004a1fa0(lVar5,param_2,iVar2 >> 3);
  if (iVar3 != 0) {
    lVar5 = *(long *)(puVar4 + 2);
    *(ulong *)(lVar5 + 0x10) = *(ulong *)(lVar5 + 0x10) & 0xfffffffffffffff8 | 8;
    if (0 < param_3 % 8) {
      pbVar1 = (byte *)(*(long *)(lVar5 + 8) + -1 + (long)(iVar2 >> 3));
      *pbVar1 = *pbVar1 & ~(byte)(0xff >> ((byte)param_3 & 7));
      *(ulong *)(*(long *)(puVar4 + 2) + 0x10) =
           *(ulong *)(*(long *)(puVar4 + 2) + 0x10) | (long)(8 - param_3 % 8);
    }
    *param_1 = puVar4;
    return 1;
  }
LAB_00607f75:
  FUN_00607e80(puVar4);
  return 0;
}

