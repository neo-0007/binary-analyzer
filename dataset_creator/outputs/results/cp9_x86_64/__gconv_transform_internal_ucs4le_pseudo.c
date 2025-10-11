
ulong __gconv_transform_internal_ucs4le
                (long param_1,undefined8 *param_2,ulong *param_3,undefined1 *param_4,
                undefined8 *param_5,long *param_6,uint param_7,int param_8)

{
  undefined1 *puVar1;
  void *__src;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  code *local_80;
  long local_78;
  uint local_4c;
  undefined1 *local_48;
  long local_40;
  
  local_4c = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (code *)0x0;
  if (((*(byte *)(param_2 + 2) & 1) == 0) &&
     (local_80 = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0)) {
    local_80 = (code *)(((ulong)local_80 >> 0x11 | (long)local_80 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    puVar5 = param_5;
    if (param_5 == (undefined8 *)0x0) {
      puVar5 = param_2;
    }
    puVar11 = (undefined1 *)*puVar5;
    puVar1 = (undefined1 *)param_2[1];
    if (param_8 != 0) {
      puVar2 = (uint *)param_2[4];
      uVar4 = *puVar2;
      if ((uVar4 & 7) != 0) {
        if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x233,
                        "__gconv_transform_internal_ucs4le");
        }
        puVar7 = (undefined1 *)*param_3;
        uVar9 = (ulong)(int)(uVar4 & 7);
        uVar6 = uVar9;
        if (puVar7 < param_4) {
          if ((uVar4 & 4) == 0) {
            uVar6 = uVar9 + 1;
            *param_3 = (ulong)(puVar7 + 1);
            *(undefined1 *)((long)puVar2 + uVar9 + 4) = *puVar7;
            if (param_4 <= puVar7 + 1) goto LAB_006ccce1;
            if (uVar6 != 4) {
              uVar6 = uVar9 + 2;
              *param_3 = (ulong)(puVar7 + 2);
              *(undefined1 *)((long)puVar2 + uVar9 + 5) = puVar7[1];
              if (param_4 <= puVar7 + 2) goto LAB_006ccce1;
              if (uVar6 == 3) {
                *param_3 = (ulong)(puVar7 + 3);
                *(undefined1 *)((long)puVar2 + 7) = puVar7[2];
              }
            }
          }
        }
        else {
LAB_006ccce1:
          if (uVar6 < 4) {
            uVar12 = 7;
            *puVar2 = (uint)uVar6 | uVar4 & 0xfffffff8;
            goto LAB_006ccb2b;
          }
        }
        *puVar11 = (char)puVar2[1];
        puVar11[1] = *(undefined1 *)((long)puVar2 + 5);
        puVar11[2] = *(undefined1 *)((long)puVar2 + 6);
        puVar11[3] = *(undefined1 *)((long)puVar2 + 7);
        *puVar2 = *puVar2 & 0xfffffff8;
        puVar11 = puVar11 + 4;
      }
    }
    while( true ) {
      __src = (void *)*param_3;
      local_78 = 0;
      if (param_6 != (long *)0x0) {
        local_78 = *param_6;
      }
      uVar12 = 4;
      uVar9 = (long)param_4 - (long)__src;
      uVar6 = (long)puVar1 - (long)puVar11;
      if ((long)uVar9 < (long)uVar6) {
        uVar6 = uVar9;
      }
      uVar10 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar10 = uVar6;
      }
      *param_3 = (long)__src + (uVar10 & 0xfffffffffffffffc);
      puVar7 = (undefined1 *)mempcpy(puVar11,__src,uVar10 & 0xfffffffffffffffc);
      if (param_4 != (undefined1 *)*param_3) {
        uVar12 = (-(uint)(puVar1 < puVar7 + 4) & 0xfffffffe) + 7;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = puVar7;
        goto LAB_006ccb2b;
      }
      *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
      if ((*(byte *)(param_2 + 2) & 1) != 0) break;
      if (puVar7 <= puVar11) goto LAB_006ccb19;
      local_48 = (undefined1 *)*param_2;
      _dl_mcount_wrapper_check(local_80);
      uVar4 = (*local_80)(param_1 + 0x68,param_2 + 6,&local_48,puVar7,0,param_6,0,param_8);
      puVar3 = local_48;
      if (uVar4 == 4) {
        if (uVar12 != 5) goto LAB_006ccb19;
      }
      else {
        if (local_48 != puVar7) {
          lVar8 = 0;
          if (param_6 != (long *)0x0) {
            lVar8 = *param_6;
          }
          if (lVar8 == local_78) {
            *param_3 = *param_3 - ((long)puVar7 - (long)local_48);
          }
          else {
            uVar6 = (long)local_48 - (long)puVar11;
            if ((long)uVar9 < (long)local_48 - (long)puVar11) {
              uVar6 = uVar9;
            }
            uVar9 = uVar6 + 3;
            if (-1 < (long)uVar6) {
              uVar9 = uVar6;
            }
            *param_3 = (long)__src + (uVar9 & 0xfffffffffffffffc);
            puVar7 = (undefined1 *)mempcpy(puVar11,__src,uVar9 & 0xfffffffffffffffc);
            if ((param_4 == (undefined1 *)*param_3) || (puVar7 + 4 <= puVar3)) {
              if (local_48 == puVar7) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                              "__gconv_transform_internal_ucs4le");
              }
LAB_006cce2b:
                    /* WARNING: Subroutine does not return */
              __assert_fail("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                            "__gconv_transform_internal_ucs4le");
            }
            if (puVar7 != local_48) goto LAB_006cce2b;
            if (puVar11 == puVar7) {
              *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
            }
          }
        }
        uVar12 = uVar4;
        if (uVar4 != 0) goto LAB_006ccb19;
      }
      puVar11 = (undefined1 *)*param_2;
    }
    *param_2 = puVar7;
LAB_006ccb19:
    if ((uVar12 == 7) && (param_8 != 0)) {
      puVar11 = (undefined1 *)*param_3;
      uVar6 = (long)param_4 - (long)puVar11;
      if (4 < uVar6) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                      0x31e,"__gconv_transform_internal_ucs4le");
      }
      puVar2 = (uint *)param_2[4];
      if (uVar6 != 0) {
        *(undefined1 *)(puVar2 + 1) = *puVar11;
        if (((uVar6 != 1) && (*(undefined1 *)((long)puVar2 + 5) = puVar11[1], uVar6 != 2)) &&
           (*(undefined1 *)((long)puVar2 + 6) = puVar11[2], uVar6 == 4)) {
          *(undefined1 *)((long)puVar2 + 7) = puVar11[3];
        }
        local_4c = (uint)uVar6;
      }
      uVar12 = 7;
      *param_3 = (ulong)param_4;
      *puVar2 = *puVar2 & 0xfffffff8 | local_4c;
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                    "__gconv_transform_internal_ucs4le");
    }
    uVar12 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      _dl_mcount_wrapper_check(local_80,param_2,0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006ccd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*local_80)(param_1 + 0x68,param_2 + 6,0,0,0,param_6);
        return uVar6;
      }
      goto LAB_006cce4a;
    }
  }
LAB_006ccb2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar12;
  }
LAB_006cce4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

