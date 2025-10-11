
void __mpn_mul_n(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar4;
  undefined1 *puVar7;
  
  puVar6 = auStack_18;
  puVar3 = auStack_18;
  puVar4 = auStack_18;
  puVar7 = auStack_18;
  puVar5 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_3) {
    if (param_4 < 0x20) {
      __mpn_impn_sqr_n_basecase(param_1,param_2,param_4);
    }
    else {
      uVar2 = param_4 * 0x10 + 0x10;
      puVar3 = auStack_18;
      while (puVar7 != auStack_18 + -(uVar2 & 0xfffffffffffff000)) {
        puVar6 = puVar3 + -0x1000;
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        puVar7 = puVar3 + -0x1000;
        puVar3 = puVar3 + -0x1000;
      }
      uVar2 = (ulong)((uint)uVar2 & 0xfff);
      lVar1 = -uVar2;
      puVar5 = puVar6 + lVar1;
      if (uVar2 != 0) {
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      }
      *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6eaaaf;
      __mpn_impn_sqr_n(param_1,param_2,param_4,(ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0);
    }
  }
  else if (param_4 < 0x20) {
    __mpn_impn_mul_n_basecase();
    puVar5 = auStack_18;
  }
  else {
    uVar2 = param_4 * 0x10 + 0x10;
    puVar6 = auStack_18;
    while (puVar4 != auStack_18 + -(uVar2 & 0xfffffffffffff000)) {
      puVar3 = puVar6 + -0x1000;
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      puVar4 = puVar6 + -0x1000;
      puVar6 = puVar6 + -0x1000;
    }
    uVar2 = (ulong)((uint)uVar2 & 0xfff);
    lVar1 = -uVar2;
    if (uVar2 != 0) {
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    }
    *(undefined8 *)(puVar3 + lVar1 + -8) = 0x6eaa32;
    __mpn_impn_mul_n();
    puVar5 = puVar3 + lVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar5 + -8) = &UNK_006eaaca;
    __stack_chk_fail_local();
  }
  return;
}

