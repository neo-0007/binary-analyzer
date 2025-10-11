
ulong locked_vfxprintf(long param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  wchar_t *__dst;
  undefined1 *puVar6;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long in_FS_OFFSET;
  undefined1 auStack_58 [4];
  uint local_54;
  char *local_50;
  mbstate_t local_48;
  long local_40;
  undefined1 *puVar7;
  
  puVar7 = auStack_58;
  puVar6 = auStack_58;
  puVar8 = auStack_58;
  puVar9 = auStack_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_2;
  if (*(int *)(param_1 + 0xc0) < 1) {
    uVar5 = __vfprintf_internal(param_1);
  }
  else {
    sVar3 = strlen(param_2);
    uVar5 = sVar3 + 1;
    if (uVar5 >> 0x3e == 0) {
      sVar3 = uVar5 * 4;
      iVar2 = __libc_alloca_cutoff(sVar3);
      if ((sVar3 < 0x1001) || (iVar2 != 0)) {
        puVar9 = auStack_58;
        while (puVar7 != auStack_58 + -(sVar3 + 0x17 & 0xfffffffffffff000)) {
          puVar6 = puVar9 + -0x1000;
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
          puVar7 = puVar9 + -0x1000;
          puVar9 = puVar9 + -0x1000;
        }
        uVar4 = (ulong)((uint)(sVar3 + 0x17) & 0xff0);
        lVar1 = -uVar4;
        puVar8 = puVar6 + lVar1;
        if (uVar4 != 0) {
          *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        }
        local_48.__count = 0;
        local_48.__value = (_union_27)0x0;
        *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6f32d9;
        sVar3 = mbsrtowcs((wchar_t *)((ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0),&local_50,
                          uVar5,&local_48);
        if ((int)sVar3 != -1) {
          *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6f3319;
          uVar5 = __vfwprintf_internal
                            (param_1,(wchar_t *)((ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0)
                             ,param_3,param_4);
          puVar9 = puVar6 + lVar1;
          goto LAB_006f32e3;
        }
      }
      else {
        __dst = (wchar_t *)malloc(sVar3);
        if (__dst != (wchar_t *)0x0) {
          local_48.__count = 0;
          local_48.__value = (_union_27)0x0;
          sVar3 = mbsrtowcs(__dst,&local_50,uVar5,&local_48);
          local_54 = (uint)sVar3;
          if (local_54 != 0xffffffff) {
            local_54 = __vfwprintf_internal(param_1,__dst,param_3,param_4);
          }
          free(__dst);
          uVar5 = (ulong)local_54;
          puVar9 = auStack_58;
          goto LAB_006f32e3;
        }
      }
      uVar5 = 0xffffffff;
      puVar9 = puVar8;
    }
    else {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
      uVar5 = 0xffffffff;
      puVar9 = auStack_58;
    }
  }
LAB_006f32e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -8) = &UNK_006f33b2;
    __stack_chk_fail_local();
  }
  return uVar5;
}

