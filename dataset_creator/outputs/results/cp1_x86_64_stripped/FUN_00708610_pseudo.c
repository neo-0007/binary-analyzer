
undefined4 FUN_00708610(uint *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0xe);
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 <= lVar1 - lVar3) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0xc);
  if ((*param_1 & 1) == 0) {
    lVar4 = FUN_007101b0(param_2 + 100);
    if (lVar4 != 0) {
      if (lVar3 != 0) {
        thunk_FUN_00713a50(lVar4,lVar3,lVar1 - lVar3);
        FUN_007104f0(lVar3);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      lVar5 = lVar5 - lVar2;
      FUN_007069a0(param_1,lVar4,lVar4 + param_2 + 100,1);
      if (param_3 == 0) {
        *(long *)(param_1 + 6) = (lVar4 + *(long *)(param_1 + 6)) - lVar3;
        *(long *)(param_1 + 2) = (*(long *)(param_1 + 2) - lVar3) + lVar4;
        *(long *)(param_1 + 4) = (*(long *)(param_1 + 4) - lVar3) + lVar4;
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x10);
        *(long *)(param_1 + 8) = lVar4;
        *(long *)(param_1 + 10) = (*(long *)(param_1 + 10) + lVar4) - lVar3;
        if (lVar5 <= param_2) {
          thunk_FUN_00713720(lVar4 + lVar5,0,param_2 - lVar5);
          return 0;
        }
      }
      else {
        *(long *)(param_1 + 6) = lVar4;
        *(long *)(param_1 + 8) = (lVar4 + *(long *)(param_1 + 8)) - lVar3;
        *(long *)(param_1 + 10) = (*(long *)(param_1 + 10) + lVar4) - lVar3;
        *(long *)(param_1 + 0xc) = (*(long *)(param_1 + 0xc) + lVar4) - lVar3;
        *(long *)(param_1 + 2) = (*(long *)(param_1 + 2) + lVar4) - lVar3;
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
        if (lVar5 <= param_2) {
          thunk_FUN_00713720(lVar4 + lVar5,0,param_2 - lVar5);
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("offset >= oldend","strops.c",0xde,"enlarge_userbuf");
    }
  }
  return 1;
}

