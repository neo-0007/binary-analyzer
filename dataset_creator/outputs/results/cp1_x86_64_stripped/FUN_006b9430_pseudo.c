
void FUN_006b9430(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_58 [40];
  long local_30;
  
  puVar5 = local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00771b70(local_58,1,0x19,"%d",param_2);
  lVar2 = thunk_FUN_007129d0(local_58);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      uVar1 = *puVar5;
      if (lVar3 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar4 = 1;
        lVar3 = 0;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      puVar5 = puVar5 + 1;
      *(long *)(param_1 + 0x100) = lVar4;
      *(undefined1 *)(param_1 + lVar3) = uVar1;
      *(undefined1 *)(param_1 + 0x108) = uVar1;
      lVar3 = lVar4;
    } while (puVar5 != local_58 + lVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

