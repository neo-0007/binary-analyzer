
/* __cxxabiv1::__vmi_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_dyncast
          (__vmi_class_type_info *this,long param_1,uint param_3,long *param_4,long *param_5,
          long param_6,long *param_7,long *param_8)

{
  char *__s1;
  ulong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  char *__s2;
  long lVar9;
  long in_FS_OFFSET;
  char local_7d;
  bool local_5e;
  byte local_5d;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)((long)param_8 + 0x14) & 0x10) != 0) {
    *(undefined4 *)((long)param_8 + 0x14) = *(undefined4 *)(this + 0x10);
  }
  __s1 = *(char **)(this + 8);
  if (param_5 == param_7) {
    if (*(char **)(param_6 + 8) == __s1) {
LAB_006adba8:
      local_7d = '\0';
      *(uint *)((long)param_8 + 0xc) = param_3;
      goto LAB_006ad6b0;
    }
    if (*__s1 == '*') {
      if (__s1 != (char *)param_4[1]) goto LAB_006ad710;
    }
    else {
      iVar3 = strcmp(__s1,*(char **)(param_6 + 8));
      if (iVar3 == 0) goto LAB_006adba8;
      __s2 = (char *)param_4[1];
      if (__s2 != __s1) goto LAB_006ad66f;
    }
  }
  else {
    __s2 = (char *)param_4[1];
    if (__s2 != __s1) {
      if (*__s1 == '*') goto LAB_006ad710;
LAB_006ad66f:
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 != 0) {
LAB_006ad710:
        local_7d = '\0';
        local_5d = 0;
        local_5e = true;
        uVar6 = 0;
        if (-1 < param_1) {
          uVar6 = (long)param_7 - param_1;
        }
        do {
          uVar7 = (ulong)*(uint *)(this + 0x14);
joined_r0x006ad747:
          if (uVar7 != 0) {
            do {
              local_58 = 0;
              uVar1 = *(ulong *)(this + uVar7 * 0x10 + 0x10);
              local_48 = (ulong)*(uint *)((long)param_8 + 0x14) << 0x20;
              local_50 = 0;
              lVar9 = (long)uVar1 >> 8;
              uVar8 = param_3;
              if ((uVar1 & 1) != 0) {
                uVar8 = param_3 | 1;
                lVar9 = *(long *)(*param_5 + lVar9);
              }
              if ((uVar6 == 0) || (local_5e != uVar6 < (ulong)(lVar9 + (long)param_5))) {
                if ((uVar1 & 2) == 0) {
                  if ((param_1 == -2) && ((*(uint *)((long)param_8 + 0x14) & 3) == 0))
                  goto code_r0x006ada21;
                  uVar8 = uVar8 & 0xfffffffd;
                }
                cVar2 = (**(code **)(**(long **)(this + uVar7 * 0x10 + 8) + 0x38))
                                  (*(long **)(this + uVar7 * 0x10 + 8),param_1,uVar8,param_4,
                                   lVar9 + (long)param_5,param_6,param_7,&local_58);
                uVar4 = (uint)local_48;
                uVar8 = *(uint *)((long)param_8 + 0xc) | local_50._4_4_;
                *(uint *)((long)param_8 + 0xc) = uVar8;
                if (((uint)local_48 & 0xfffffffb) == 2) {
                  *(uint *)(param_8 + 2) = (uint)local_48;
                  *param_8 = local_58;
                  *(uint *)(param_8 + 1) = (uint)local_50;
                  local_7d = cVar2;
                  goto LAB_006ad6b0;
                }
                lVar9 = *param_8;
                if (local_7d == '\0') {
                  if (lVar9 != 0) goto LAB_006ad761;
                  *param_8 = local_58;
                  *(uint *)(param_8 + 1) = (uint)local_50;
                  local_7d = cVar2;
                  if (((local_58 != 0) && (uVar8 != 0)) && (((byte)this[0x10] & 1) == 0))
                  goto LAB_006ad6b0;
                }
                else if (lVar9 == 0) {
                  if (local_58 == 0) goto LAB_006ad7ed;
                  uVar5 = *(uint *)(param_8 + 2);
joined_r0x006ad77a:
                  if (((int)uVar8 < 4) ||
                     (((uVar8 & 1) != 0 && ((*(byte *)((long)param_8 + 0x14) & 2) != 0)))) {
                    if (0 < (int)uVar5) {
LAB_006ad8fb:
                      if (0 < (int)uVar4) goto LAB_006ad7a1;
                      if (((int)uVar5 < 4) || (((uVar5 & 1) != 0 && (((byte)this[0x10] & 2) != 0))))
                      {
                        if (param_1 < 0) {
                          if (param_1 == -2) goto LAB_006ad9e7;
                          uVar4 = (**(code **)(*param_4 + 0x40))
                                            (param_4,param_1,local_58,param_6,param_7);
                          uVar8 = uVar4 ^ uVar5;
                          goto joined_r0x006ad964;
                        }
                        if (param_7 != (long *)(local_58 + param_1)) goto LAB_006ad9e7;
                        if (3 < (int)(uVar5 ^ 6)) goto LAB_006adbe7;
                        uVar4 = 6;
                        goto LAB_006ad970;
                      }
LAB_006ad9e7:
                      uVar8 = uVar5;
                      if (3 < (int)(uVar5 ^ 1)) goto LAB_006adac8;
                      goto LAB_006ad9f6;
                    }
                    if (((int)(uint)local_48 < 4) ||
                       (((local_48 & 1) != 0 && (((byte)this[0x10] & 2) != 0)))) {
                      if (param_1 < 0) {
                        if (param_1 != -2) {
                          uVar5 = (**(code **)(*param_4 + 0x40))
                                            (param_4,param_1,lVar9,param_6,param_7);
                          goto LAB_006ad8fb;
                        }
                        if (0 < (int)(uint)local_48) goto LAB_006adb87;
LAB_006ad9e1:
                        uVar5 = 1;
                        goto LAB_006ad9e7;
                      }
                      if (param_7 == (long *)(lVar9 + param_1)) {
                        uVar5 = 6;
                        uVar8 = 6;
                        if (0 < (int)(uint)local_48) goto LAB_006ad7a1;
                        goto LAB_006adac8;
                      }
                      if (0 < (int)(uint)local_48) {
LAB_006adb87:
                        uVar5 = 1;
                        if (((uint)local_48 ^ 1) < 4) goto LAB_006ad9f9;
                        goto LAB_006ad7b0;
                      }
                      if (param_7 != (long *)(local_58 + param_1)) goto LAB_006ad9e1;
LAB_006adbe7:
                      uVar8 = 2;
                      uVar4 = 6;
                      goto LAB_006ad7c5;
                    }
                    if (3 < ((uint)local_48 ^ 1)) goto LAB_006ad7bf;
                  }
                  else {
                    if (uVar5 == 0) {
                      uVar5 = 1;
                    }
                    if ((uint)local_48 == 0) {
                      uVar4 = 1;
                    }
LAB_006ad7a1:
                    uVar8 = uVar4 ^ uVar5;
joined_r0x006ad964:
                    if (3 < (int)uVar8) {
LAB_006ad7b0:
                      uVar8 = uVar5;
                      if ((int)uVar4 < 4) {
LAB_006adac8:
                        uVar4 = uVar8;
                        uVar8 = uVar4 & 2;
                      }
                      else {
LAB_006ad7bf:
                        uVar8 = uVar4 & 2;
LAB_006ad7c5:
                        *param_8 = local_58;
                        local_7d = '\0';
                        *(uint *)(param_8 + 1) = (uint)local_50;
                      }
                      *(uint *)(param_8 + 2) = uVar4;
                      if ((uVar8 == 0) && ((uVar4 & 1) != 0)) {
                        uVar8 = *(uint *)((long)param_8 + 0xc);
                        goto LAB_006ad7ed;
                      }
                      local_7d = '\0';
                      goto LAB_006ad6b0;
                    }
LAB_006ad970:
                    if (3 < (int)(uVar4 & uVar5)) {
                      *param_8 = 0;
                      *(undefined4 *)(param_8 + 2) = 2;
                      local_7d = '\x01';
                      goto LAB_006ad6b0;
                    }
LAB_006ad9f6:
                    uVar8 = *(uint *)((long)param_8 + 0xc);
                  }
LAB_006ad9f9:
                  *param_8 = 0;
                  *(undefined4 *)(param_8 + 2) = 1;
                  local_7d = '\x01';
                }
                else {
LAB_006ad761:
                  if (local_58 == lVar9) {
                    *(uint *)(param_8 + 1) = *(uint *)(param_8 + 1) | (uint)local_50;
                  }
                  else if ((local_58 != 0) || (cVar2 != '\0')) {
                    uVar5 = *(uint *)(param_8 + 2);
                    goto joined_r0x006ad77a;
                  }
                }
LAB_006ad7ed:
                if (uVar8 == 4) goto LAB_006ad6b0;
              }
              else {
                local_5d = 1;
              }
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) break;
            } while( true );
          }
          local_5d = local_5d & local_5e;
          local_5e = false;
          if (local_5d == 0) goto LAB_006ad6b0;
        } while( true );
      }
    }
  }
  *param_8 = (long)param_5;
  *(uint *)(param_8 + 1) = param_3;
  if (param_1 < 0) {
    local_7d = '\0';
    if (param_1 == -2) {
      *(undefined4 *)(param_8 + 2) = 1;
    }
  }
  else {
    local_7d = '\0';
    *(uint *)(param_8 + 2) = (uint)(param_7 == (long *)((long)param_5 + param_1)) * 5 + 1;
  }
LAB_006ad6b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_7d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x006ada21:
  uVar7 = uVar7 - 1;
  goto joined_r0x006ad747;
}

