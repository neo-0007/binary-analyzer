
int __libio_codecvt_length
              (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined1 local_48 [8];
  long local_40;
  undefined1 *puVar8;
  
  puVar7 = auStack_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = param_5 * 4 + 0xf;
  puVar8 = auStack_58;
  puVar4 = auStack_58;
  while (puVar8 != auStack_58 + -(uVar5 & 0xfffffffffffff000)) {
    puVar7 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar8 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  uVar5 = (ulong)((uint)uVar5 & 0xff0);
  lVar3 = -uVar5;
  if (uVar5 != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  }
  plVar1 = (long *)*param_1;
  param_1[5] = param_2;
  lVar2 = *plVar1;
  pcVar6 = (code *)plVar1[5];
  param_1[1] = (long)puVar7 + lVar3;
  param_1[2] = (long)(puVar7 + param_5 * 4 + lVar3);
  if (lVar2 != 0) {
    pcVar6 = (code *)(((ulong)pcVar6 >> 0x11 | (long)pcVar6 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  *(undefined8 *)(puVar7 + lVar3 + -8) = 0x6f8687;
  local_50 = param_3;
  _dl_mcount_wrapper_check(pcVar6);
  *(undefined8 *)(puVar7 + lVar3 + -8) = 0;
  *(undefined8 *)(puVar7 + lVar3 + -0x10) = 0;
  *(undefined8 *)(puVar7 + lVar3 + -0x18) = 0x6f86a1;
  (*pcVar6)(plVar1,param_1 + 1,&local_50,param_4,0,local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + lVar3 + -0x18) = &UNK_006f86d8;
    __stack_chk_fail_local();
  }
  return (int)local_50 - (int)param_3;
}

