
void CRYPTO_cbc128_decrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  long lVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  ulong local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) goto LAB_0042248c;
  if (param_1 == param_2) {
    puVar5 = param_1;
    if (0xf < param_3) {
      lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
      puVar4 = (ulong *)((long)param_1 + lVar1);
      do {
        (*param_6)(param_1,local_58);
        uVar6 = *param_1;
        puVar7 = param_1 + 2;
        *puVar5 = local_58[0] ^ *param_5;
        *param_5 = uVar6;
        uVar6 = param_1[1];
        puVar5[1] = local_58[1] ^ param_5[1];
        param_5[1] = uVar6;
        param_1 = puVar7;
        puVar5 = puVar5 + 2;
      } while (puVar7 != puVar4);
      param_3 = (ulong)((uint)param_3 & 0xf);
      puVar5 = (ulong *)(lVar1 + (long)param_2);
      goto LAB_00422434;
    }
  }
  else {
    puVar5 = param_2;
    if (0xf < param_3) {
      uVar6 = param_3 - 0x10 >> 4;
      lVar1 = uVar6 + 1;
      puVar5 = param_2 + lVar1 * 2;
      puVar4 = param_1;
      puVar7 = param_5;
      do {
        puVar3 = puVar4;
        (*param_6)(puVar3,param_2);
        *param_2 = *param_2 ^ *puVar7;
        param_2[1] = param_2[1] ^ puVar7[1];
        param_2 = param_2 + 2;
        puVar4 = puVar3 + 2;
        puVar7 = puVar3;
      } while (param_2 != puVar5);
      param_3 = (ulong)((uint)param_3 & 0xf);
      puVar4 = param_1 + lVar1 * 2;
      param_1 = param_1 + uVar6 * 2;
      if (param_5 != param_1) {
        uVar6 = param_1[1];
        *param_5 = *param_1;
        param_5[1] = uVar6;
      }
LAB_00422434:
      param_1 = puVar4;
      if (param_3 == 0) goto LAB_0042248c;
    }
  }
  (*param_6)(param_1,local_58);
  uVar6 = 0;
  do {
    uVar2 = *(undefined1 *)((long)param_1 + uVar6);
    *(byte *)((long)puVar5 + uVar6) =
         *(byte *)((long)local_58 + uVar6) ^ *(byte *)((long)param_5 + uVar6);
    *(undefined1 *)((long)param_5 + uVar6) = uVar2;
    uVar6 = uVar6 + 1;
  } while (uVar6 < param_3);
  if (param_3 == 0) {
    param_3 = 1;
  }
  do {
    *(undefined1 *)((long)param_5 + param_3) = *(undefined1 *)((long)param_1 + param_3);
    param_3 = param_3 + 1;
  } while (param_3 != 0x10);
LAB_0042248c:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

