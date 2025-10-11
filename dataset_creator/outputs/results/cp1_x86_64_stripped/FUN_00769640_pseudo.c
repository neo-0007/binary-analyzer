
bool FUN_00769640(long *param_1,long *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  long in_FS_OFFSET;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  puVar3 = (undefined1 *)thunk_FUN_00712710(param_4,0x2f);
  if (puVar3 == (undefined1 *)0x0) {
    *param_6 = 0;
    iVar2 = FUN_007774c0(10,param_4,&local_58);
    if ((iVar2 != 0) && (*local_60 == '\0')) {
      uVar4 = 0x80;
      goto LAB_00769752;
    }
  }
  else {
    *puVar3 = 0;
    *param_6 = puVar3 + 1;
    iVar2 = FUN_007774c0(10,param_4,&local_58);
    if ((((iVar2 != 0) &&
         (uVar4 = FUN_006e9510(puVar3 + 1,&local_60,10), uVar4 != 0xffffffffffffffff)) &&
        (*local_60 == '\0')) && (uVar4 < 0x81)) {
LAB_00769752:
      bVar7 = true;
      uVar5 = FUN_006e9510(param_5,&local_60,10);
      if (uVar5 == 0xffffffffffffffff) goto LAB_007696ba;
      bVar7 = *local_60 == '\0' && uVar5 < 0x80000000;
      if (*local_60 == '\0' && uVar5 < 0x80000000) {
        puVar6 = (undefined8 *)FUN_007101b0(0x20);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = false;
        }
        else {
          lVar1 = *param_1;
          *param_1 = (long)puVar6;
          *(int *)(puVar6 + 2) = (int)uVar4;
          *puVar6 = local_58;
          puVar6[1] = uStack_50;
          *(int *)((long)puVar6 + 0x14) = (int)uVar5;
          puVar6[3] = lVar1;
          *param_2 = *param_2 + 1;
          *param_3 = *param_3 | uVar4 == 0;
        }
        goto LAB_007696ba;
      }
    }
  }
  bVar7 = true;
LAB_007696ba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar7;
}

