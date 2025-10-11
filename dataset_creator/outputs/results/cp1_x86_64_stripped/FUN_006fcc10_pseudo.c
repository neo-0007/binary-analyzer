
ulong FUN_006fcc10(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined1 auStack_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar6;
  
  puVar6 = auStack_58;
  puVar5 = auStack_58;
  puVar7 = auStack_58;
  puVar8 = auStack_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_2;
  if (*(int *)(param_1 + 0xc0) < 1) {
    uVar4 = FUN_007986e0(param_1);
  }
  else {
    lVar2 = thunk_FUN_007129d0(param_2);
    uVar4 = lVar2 + 1;
    if (uVar4 >> 0x3e == 0) {
      uVar3 = uVar4 * 4;
      iVar1 = FUN_007094d0(uVar3);
      if ((uVar3 < 0x1001) || (iVar1 != 0)) {
        puVar8 = auStack_58;
        while (puVar6 != auStack_58 + -(uVar3 + 0x17 & 0xfffffffffffff000)) {
          puVar5 = puVar8 + -0x1000;
          *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          puVar6 = puVar8 + -0x1000;
          puVar8 = puVar8 + -0x1000;
        }
        uVar3 = (ulong)((uint)(uVar3 + 0x17) & 0xff0);
        lVar2 = -uVar3;
        puVar7 = puVar5 + lVar2;
        if (uVar3 != 0) {
          *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        }
        local_48 = 0;
        *(undefined8 *)(puVar5 + lVar2 + -8) = 0x6fcce9;
        iVar1 = FUN_00756e10((ulong)(puVar5 + lVar2 + 0xf) & 0xfffffffffffffff0,&local_50,uVar4,
                             &local_48);
        if (iVar1 != -1) {
          *(undefined8 *)(puVar5 + lVar2 + -8) = 0x6fcd29;
          uVar4 = FUN_0079de90(param_1,(ulong)(puVar5 + lVar2 + 0xf) & 0xfffffffffffffff0,param_3,
                               param_4);
          puVar8 = puVar5 + lVar2;
          goto LAB_006fccf3;
        }
      }
      else {
        lVar2 = FUN_007101b0(uVar3);
        if (lVar2 != 0) {
          local_48 = 0;
          local_54 = FUN_00756e10(lVar2,&local_50,uVar4,&local_48);
          if (local_54 != 0xffffffff) {
            local_54 = FUN_0079de90(param_1,lVar2,param_3,param_4);
          }
          FUN_007104f0(lVar2);
          uVar4 = (ulong)local_54;
          puVar8 = auStack_58;
          goto LAB_006fccf3;
        }
      }
      uVar4 = 0xffffffff;
      puVar8 = puVar7;
    }
    else {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
      uVar4 = 0xffffffff;
      puVar8 = auStack_58;
    }
  }
LAB_006fccf3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_006fcdc2;
    FUN_00771f60();
  }
  return uVar4;
}

