
undefined8
FUN_005fd200(int *param_1,undefined1 *param_2,undefined4 *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  *param_3 = 0;
  if (param_5 < 1) {
    return 0;
  }
  if (0x50 < param_1[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                 "../crypto/evp/encode.c",0xab);
  }
  iVar1 = *param_1;
  iVar2 = param_1[1] - iVar1;
  if (param_5 < iVar2) {
    thunk_FUN_00713a50((long)param_1 + (long)iVar1 + 8,param_4,(long)param_5);
    *param_1 = *param_1 + param_5;
    return 1;
  }
  uVar4 = 0;
  lVar5 = param_4;
  if (iVar1 != 0) {
    lVar5 = param_4 + iVar2;
    thunk_FUN_00713a50((long)param_1 + (long)iVar1 + 8,param_4,(long)iVar2);
    param_5 = param_5 - iVar2;
    iVar1 = FUN_005fcea0(param_1,param_2,param_1 + 2,param_1[1]);
    *param_1 = 0;
    uVar4 = (ulong)iVar1;
    param_2 = param_2 + uVar4;
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      *param_2 = 10;
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 1;
    }
    *param_2 = 0;
    if (param_5 < param_1[1]) {
LAB_005fd2a5:
      if (uVar4 < 0x80000000) {
        if (param_5 != 0) {
          thunk_FUN_00713a50(param_1 + 2,lVar5,(long)param_5);
        }
        *param_1 = param_5;
        *param_3 = (int)uVar4;
        return 1;
      }
      goto LAB_005fd34d;
    }
    if (0x7fffffff < uVar4) goto LAB_005fd34d;
  }
  uVar3 = 0x80000000;
  do {
    iVar1 = FUN_005fcea0(param_1,param_2,lVar5);
    lVar5 = lVar5 + param_1[1];
    param_5 = param_5 - param_1[1];
    param_2 = param_2 + iVar1;
    uVar4 = uVar4 + (long)iVar1;
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      *param_2 = 10;
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 1;
    }
    *param_2 = 0;
    if (param_5 < param_1[1]) goto LAB_005fd2a5;
  } while (uVar4 < uVar3);
LAB_005fd34d:
  *param_3 = 0;
  return 0;
}

