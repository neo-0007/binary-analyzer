
undefined8 find_module_constprop_0(char *param_1,char *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  size_t __n;
  size_t sVar4;
  void *__dest;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  code *pcVar10;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  undefined1 *puVar9;
  
  puVar8 = auStack_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n = strlen(param_1);
  sVar4 = strlen(param_2);
  uVar7 = __n + 0x10 + sVar4;
  puVar9 = auStack_48;
  puVar3 = auStack_48;
  while (puVar9 != auStack_48 + -(uVar7 & 0xfffffffffffff000)) {
    puVar8 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar9 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar2 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
  }
  *(undefined8 *)(puVar8 + lVar2 + -8) = 0x6d3f9f;
  __dest = mempcpy(puVar8 + lVar2,param_1,__n);
  *(undefined8 *)(puVar8 + lVar2 + -8) = 0x6d3fad;
  memcpy(__dest,param_2,sVar4 + 1);
  *(undefined8 *)(puVar8 + lVar2 + -8) = 0x6d3fb5;
  lVar5 = __gconv_find_shlib((long)puVar8 + lVar2);
  *param_3 = lVar5;
  uVar6 = 1;
  if (lVar5 != 0) {
    lVar1 = *(long *)(lVar5 + 0x18);
    uVar7 = *(ulong *)(lVar5 + 0x20);
    param_3[1] = 0;
    param_3[5] = lVar1;
    lVar5 = *(long *)(lVar5 + 0x28);
    param_3[7] = uVar7;
    param_3[8] = lVar5;
    uVar6 = 0;
    param_3[6] = 0;
    param_3[0xc] = 0;
    pcVar10 = (code *)((uVar7 >> 0x11 | uVar7 << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30));
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(puVar8 + lVar2 + -8) = 0x6d4011;
      _dl_mcount_wrapper_check(pcVar10);
      *(undefined8 *)(puVar8 + lVar2 + -8) = 0x6d4017;
      uVar6 = (*pcVar10)(param_3);
      uVar7 = param_3[6] ^ *(ulong *)(in_FS_OFFSET + 0x30);
      param_3[6] = uVar7 << 0x11 | uVar7 >> 0x2f;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar8 + lVar2 + -8) = __gconv_get_cache;
    __stack_chk_fail_local();
  }
  return uVar6;
}

