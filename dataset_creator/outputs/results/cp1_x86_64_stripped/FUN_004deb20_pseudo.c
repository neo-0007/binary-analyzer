
undefined8
FUN_004deb20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
            undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long in_FS_OFFSET;
  undefined1 local_338 [64];
  undefined1 local_2f8 [64];
  undefined1 local_2b8 [256];
  undefined1 local_1b8 [256];
  undefined1 local_b8 [120];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar3 = 0x37; bVar1 = *(byte *)(param_2 + 0x3a + lVar3), bVar1 <= bVar5; lVar3 = lVar3 + -1)
  {
    if (bVar1 < bVar5) {
      uVar4 = FUN_004dcc20(local_2b8,param_3);
      if ((int)uVar4 != -1) goto LAB_004deba8;
      uVar4 = FUN_004dcc20(local_1b8,param_2);
      if ((int)uVar4 != -1) goto LAB_004deba8;
      lVar3 = FUN_00405f40();
      if (lVar3 != 0) {
        iVar2 = FUN_004de490(param_1,lVar3,param_6,param_7,param_8,param_9);
        if (iVar2 != 0) {
          iVar2 = FUN_00405f60(lVar3,param_2,0x39);
          if (iVar2 != 0) {
            iVar2 = FUN_00405f60(lVar3,param_3,0x39);
            if (iVar2 != 0) {
              iVar2 = FUN_00405f60(lVar3,param_4,param_5);
              if (iVar2 != 0) {
                iVar2 = FUN_004062e0(lVar3,local_b8,0x72);
                if (iVar2 != 0) {
                  FUN_00406b90(lVar3);
                  FUN_004dfd50(local_338,local_b8,0x72);
                  FUN_004227b0(local_b8,0x72);
                  FUN_004dfbc0(local_338,&DAT_007f1160,local_338);
                  FUN_004dfd50(local_2f8,param_2 + 0x39,0x39);
                  FUN_004dde60(local_2b8,local_2f8,local_2b8,local_338);
                  uVar4 = FUN_004dc780(local_2b8,local_1b8);
                  goto LAB_004deba8;
                }
              }
            }
          }
        }
      }
      FUN_00406b90(lVar3);
      uVar4 = 0;
      goto LAB_004deba8;
    }
    if (lVar3 == -1) break;
    bVar5 = (&DAT_007f10a0)[lVar3];
  }
  uVar4 = 0;
LAB_004deba8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

