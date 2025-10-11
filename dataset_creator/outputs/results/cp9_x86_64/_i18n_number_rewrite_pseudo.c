
char * _i18n_number_rewrite(char *param_1,long param_2,char *param_3)

{
  mbstate_t mVar1;
  byte bVar2;
  char cVar3;
  wchar_t __wc;
  wchar_t __wc_00;
  uint uVar4;
  wctrans_t __desc;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  mbstate_t mVar11;
  long in_FS_OFFSET;
  mbstate_t local_488;
  undefined8 local_480;
  undefined1 local_478 [1024];
  char local_78 [32];
  char local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __desc = wctrans("to_outpunct");
  __wc = towctrans(0x2e,__desc);
  __wc_00 = towctrans(0x2c,__desc);
  if (__desc != (wctrans_t)0x0) {
    local_488.__count = 0;
    local_488.__value = (_union_27)0x0;
    sVar6 = wcrtomb(local_78,__wc,&local_488);
    if (sVar6 == 0xffffffffffffffff) {
      local_78[0] = '.';
      local_78[1] = '\0';
    }
    else {
      local_78[sVar6] = '\0';
    }
    local_488.__count = 0;
    local_488.__value = (_union_27)0x0;
    sVar6 = wcrtomb(local_58,__wc_00,&local_488);
    if (sVar6 == 0xffffffffffffffff) {
      local_58[0] = ',';
      local_58[1] = '\0';
    }
    else {
      local_58[sVar6] = '\0';
    }
  }
  local_480 = 0x400;
  local_488 = (mbstate_t)local_478;
  cVar3 = __libc_scratch_buffer_set_array_size(&local_488,param_2 - (long)param_1,1);
  mVar1 = local_488;
  if (cVar3 != '\0') {
    pvVar5 = mempcpy((void *)local_488,param_1,param_2 - (long)param_1);
    mVar11 = (mbstate_t)((long)pvVar5 - 1);
    if ((ulong)mVar1 <= (ulong)mVar11) {
      mVar1 = (mbstate_t)((long)mVar1 - 1);
      do {
        while (bVar2 = *(byte *)mVar11, 9 < (byte)(bVar2 - 0x30)) {
          if ((__desc == (wctrans_t)0x0) || ((bVar2 & 0xfd) != 0x2c)) {
            param_3[-1] = bVar2;
            param_3 = param_3 + -1;
          }
          else {
            pcVar10 = local_58;
            if (bVar2 == 0x2e) {
              pcVar10 = local_78;
            }
            sVar6 = strlen(pcVar10);
            param_3 = param_3 + -sVar6;
            if (sVar6 != 0) {
              uVar4 = (uint)sVar6;
              if (uVar4 < 8) {
                if ((sVar6 & 4) == 0) {
                  if ((uVar4 != 0) && (*param_3 = *pcVar10, (sVar6 & 2) != 0)) {
                    *(undefined2 *)(param_3 + ((sVar6 & 0xffffffff) - 2)) =
                         *(undefined2 *)(pcVar10 + ((sVar6 & 0xffffffff) - 2));
                  }
                }
                else {
                  *(undefined4 *)param_3 = *(undefined4 *)pcVar10;
                  *(undefined4 *)(param_3 + ((sVar6 & 0xffffffff) - 4)) =
                       *(undefined4 *)(pcVar10 + ((sVar6 & 0xffffffff) - 4));
                }
              }
              else {
                *(undefined8 *)param_3 = *(undefined8 *)pcVar10;
                *(undefined8 *)(param_3 + ((sVar6 & 0xffffffff) - 8)) =
                     *(undefined8 *)(pcVar10 + ((sVar6 & 0xffffffff) - 8));
                lVar7 = (long)param_3 - ((ulong)(param_3 + 8) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar9 = 0;
                  do {
                    uVar8 = (int)uVar9 + 8;
                    *(undefined8 *)(((ulong)(param_3 + 8) & 0xfffffffffffffff8) + uVar9) =
                         *(undefined8 *)(pcVar10 + (uVar9 - lVar7));
                    uVar9 = (ulong)uVar8;
                  } while (uVar8 < uVar4);
                }
              }
            }
          }
LAB_007b13c2:
          mVar11 = (mbstate_t)((long)mVar11 - 1);
          if (mVar11 == mVar1) goto LAB_007b1420;
        }
        pcVar10 = *(char **)(**(long **)(in_FS_OFFSET + -0xd8) + 0x40 + (long)(char)(bVar2 - 7) * 8)
        ;
        sVar6 = strlen(pcVar10);
        param_3 = param_3 + -sVar6;
        if (sVar6 == 0) goto LAB_007b13c2;
        do {
          sVar6 = sVar6 - 1;
          param_3[sVar6] = pcVar10[sVar6];
        } while (sVar6 != 0);
        mVar11 = (mbstate_t)((long)mVar11 - 1);
      } while (mVar11 != mVar1);
    }
LAB_007b1420:
    param_1 = param_3;
    if (local_488 != (mbstate_t)local_478) {
      free((void *)local_488);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}

