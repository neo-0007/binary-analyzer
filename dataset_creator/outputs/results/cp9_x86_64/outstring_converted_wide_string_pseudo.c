
ulong outstring_converted_wide_string
                (long param_1,char *param_2,int param_3,int param_4,char param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  ulong local_188;
  char *local_160;
  char *local_158;
  mbstate_t local_150;
  wchar_t local_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = param_4 < 1;
  local_160 = param_2;
  if ((param_5 == '\x01') || (bVar1)) goto LAB_007917ee;
  local_150.__count = 0;
  local_150.__value = (_union_27)0x0;
  local_158 = param_2;
  if (param_3 < 0) {
    sVar6 = mbsrtowcs((wchar_t *)0x0,&local_158,0,&local_150);
    if (sVar6 < (ulong)(long)param_4) {
LAB_00791b2d:
      iVar2 = param_4 - (int)sVar6;
      if (0 < iVar2) goto LAB_00791927;
LAB_00791b3c:
      if (-1 < (int)param_6) goto LAB_007917ee;
    }
    else {
LAB_007917ee:
      local_150.__count = 0;
      local_150.__value = (_union_27)0x0;
      if (param_3 < 0) {
        if (local_160 == (char *)0x0) goto LAB_00791b60;
        local_188 = 0;
        do {
          sVar6 = mbsrtowcs(local_148,&local_160,0x40,&local_150);
          if (sVar6 == 0xffffffffffffffff) goto LAB_00791968;
          if (sVar6 == 0) goto LAB_00791a90;
          if ((int)param_6 < 0) {
LAB_00791b7a:
                    /* WARNING: Subroutine does not return */
            __assert_fail("(size_t) done <= (size_t) INT_MAX","vfprintf-internal.c",0xee,
                          "outstring_func");
          }
          lVar4 = *(long *)(param_1 + 0xd8);
          if (0x827 < lVar4 - 0x932180U) {
            _IO_vtable_check();
          }
          sVar3 = (**(code **)(lVar4 + 0x38))(param_1,local_148,sVar6);
          if (sVar3 != sVar6) goto LAB_00791968;
          uVar5 = (long)(int)param_6 + sVar6;
          param_6 = (uint)uVar5;
          if (uVar5 != (long)(int)param_6 || uVar5 + 0x8000000000000000 < sVar6) goto LAB_00791954;
          if ((int)param_6 < 0) goto LAB_00791b58;
          local_188 = local_188 + sVar6;
        } while (local_160 != (char *)0x0);
        uVar5 = uVar5 & 0xffffffff;
LAB_00791a93:
        if (((bVar1) || (param_5 == '\0')) || ((ulong)(long)param_4 <= local_188))
        goto LAB_0079196e;
LAB_00791abc:
        param_4 = param_4 - (int)local_188;
        if (param_4 < 1) goto LAB_0079196e;
        lVar4 = _IO_wpadn(param_1,0x20,(long)param_4);
        if (param_4 == lVar4) {
          iVar2 = (int)uVar5;
          if ((iVar2 < 0) || (uVar5 = (ulong)(uint)(iVar2 + param_4), !SCARRY4(iVar2,param_4)))
          goto LAB_0079196e;
          goto LAB_00791954;
        }
        goto LAB_00791968;
      }
      uVar7 = (ulong)param_3;
      if ((local_160 != (char *)0x0) && (uVar7 != 0)) {
        local_188 = 0;
        while( true ) {
          sVar6 = 0x40;
          if (uVar7 < 0x40) {
            sVar6 = uVar7;
          }
          sVar6 = mbsrtowcs(local_148,&local_160,sVar6,&local_150);
          if (sVar6 == 0xffffffffffffffff) goto LAB_00791968;
          if (sVar6 == 0) break;
          if ((int)param_6 < 0) goto LAB_00791b7a;
          lVar4 = *(long *)(param_1 + 0xd8);
          if (0x827 < lVar4 - 0x932180U) {
            _IO_vtable_check();
          }
          sVar3 = (**(code **)(lVar4 + 0x38))(param_1,local_148,sVar6);
          if (sVar6 != sVar3) goto LAB_00791968;
          uVar5 = (long)(int)param_6 + sVar6;
          param_6 = (uint)uVar5;
          if (uVar5 != (long)(int)param_6 || uVar5 + 0x8000000000000000 < sVar6) goto LAB_00791954;
          if ((int)param_6 < 0) goto LAB_00791b58;
          local_188 = local_188 + sVar6;
          uVar7 = uVar7 - sVar6;
          if ((local_160 == (char *)0x0) || (uVar7 == 0)) break;
        }
LAB_00791a90:
        uVar5 = (ulong)param_6;
        goto LAB_00791a93;
      }
LAB_00791b60:
      if (!bVar1) {
        local_188._0_4_ = 0;
        uVar5 = (ulong)param_6;
        if (param_5 != '\0') goto LAB_00791abc;
      }
    }
LAB_00791b44:
    uVar5 = (ulong)param_6;
  }
  else {
    uVar7 = (ulong)param_3;
    sVar6 = 0;
    iVar2 = param_4;
    if (param_3 != 0) {
      do {
        if (local_158 == (char *)0x0) break;
        sVar3 = 0x40;
        if (uVar7 < 0x40) {
          sVar3 = uVar7;
        }
        sVar3 = mbsrtowcs(local_148,&local_158,sVar3,&local_150);
        if (sVar3 == 0xffffffffffffffff) goto LAB_00791968;
        if (sVar3 == 0) break;
        sVar6 = sVar6 + sVar3;
        uVar7 = uVar7 - sVar3;
      } while (uVar7 != 0);
      if (sVar6 < (ulong)(long)param_4) goto LAB_00791b2d;
      goto LAB_007917ee;
    }
LAB_00791927:
    lVar4 = _IO_wpadn(param_1,0x20,(long)iVar2);
    if (iVar2 == lVar4) {
      if ((int)param_6 < 0) goto LAB_00791b44;
      bVar8 = SCARRY4(param_6,iVar2);
      param_6 = param_6 + iVar2;
      if (!bVar8) goto LAB_00791b3c;
LAB_00791954:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
    }
LAB_00791968:
    uVar5 = 0xffffffff;
  }
LAB_0079196e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_00791b58:
  uVar5 = uVar5 & 0xffffffff;
  goto LAB_0079196e;
}

