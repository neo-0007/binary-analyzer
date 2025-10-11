
undefined1 * _fitoa_word(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined1 local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = local_18;
  puVar2 = (undefined1 *)_itoa_word(param_1,puVar8);
  if (puVar8 <= puVar2) goto LAB_0078bb0e;
  puVar3 = puVar2 + 1;
  uVar7 = (long)puVar8 - (long)puVar2;
  puVar5 = param_2;
  if (((ulong)((long)param_2 - (long)puVar3) < 0xf) || (uVar7 - 1 < 7)) {
    while( true ) {
      *puVar5 = puVar3[-1];
      if (puVar3 == puVar8) break;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else if (uVar7 - 1 < 0xf) {
    uVar6 = 0;
    puVar3 = param_2;
    puVar5 = puVar2;
    uVar4 = uVar7;
LAB_0078ba8b:
    *(undefined8 *)(param_2 + uVar6) = *(undefined8 *)(puVar2 + uVar6);
    uVar6 = uVar4 & 0xfffffffffffffff8;
    puVar3 = puVar3 + uVar6;
    puVar5 = puVar5 + uVar6;
    if (uVar4 != uVar6) {
LAB_0078baa5:
      *puVar3 = *puVar5;
      if ((((puVar5 + 1 < puVar8) && (puVar3[1] = puVar5[1], puVar5 + 2 < puVar8)) &&
          (puVar3[2] = puVar5[2], puVar5 + 3 < puVar8)) &&
         (((puVar3[3] = puVar5[3], puVar5 + 4 < puVar8 &&
           (puVar3[4] = puVar5[4], puVar5 + 5 < puVar8)) &&
          (puVar3[5] = puVar5[5], puVar5 + 6 < puVar8)))) {
        puVar3[6] = puVar5[6];
      }
    }
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = *(undefined8 *)((long)(puVar2 + uVar4) + 8);
      *(undefined8 *)(param_2 + uVar4) = *(undefined8 *)(puVar2 + uVar4);
      *(undefined8 *)((long)(param_2 + uVar4) + 8) = uVar1;
      uVar4 = uVar4 + 0x10;
    } while (uVar4 != (uVar7 & 0xfffffffffffffff0));
    uVar6 = uVar7 & 0xfffffffffffffff0;
    puVar3 = param_2 + uVar6;
    puVar5 = puVar2 + uVar6;
    if (uVar7 != uVar6) {
      uVar4 = uVar7 - uVar6;
      if (6 < (uVar7 - uVar6) - 1) goto LAB_0078ba8b;
      goto LAB_0078baa5;
    }
  }
  param_2 = param_2 + uVar7;
LAB_0078bb0e:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_2;
}

