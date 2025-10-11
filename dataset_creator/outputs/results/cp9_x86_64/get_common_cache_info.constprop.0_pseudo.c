
/* WARNING: Removing unreachable block (ram,0x006c69ef) */
/* WARNING: Removing unreachable block (ram,0x006c6ab8) */
/* WARNING: Removing unreachable block (ram,0x006c69ab) */
/* WARNING: Removing unreachable block (ram,0x006c6902) */
/* WARNING: Removing unreachable block (ram,0x006c6887) */

ulong get_common_cache_info_constprop_0(ulong *param_1,uint *param_2,ulong param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char local_3d;
  int local_38;
  
  uVar5 = (ulong)_dl_x86_cpu_features;
  if ((long)*param_1 < 1) {
    local_38 = 2;
    uVar3 = 0xffffffff;
    uVar9 = param_3;
  }
  else {
    local_38 = 3;
    uVar3 = 0;
    uVar9 = *param_1;
  }
  uVar8 = DAT_0093dee0 & 0x10000000;
  if (uVar8 == 0) goto LAB_006c6840;
  if (DAT_0093dec4 < 4) {
    local_3d = '\x01';
    uVar7 = 0;
LAB_006c6807:
    uVar8 = (uint)DAT_0093deda;
LAB_006c680e:
    if ((0 < (long)uVar9) && (uVar8 != 0)) {
      uVar5 = (long)uVar9 / (long)(ulong)uVar8;
      uVar9 = uVar5;
    }
LAB_006c6824:
    if (local_3d != '\0') goto LAB_006c6840;
    if (uVar7 != 0) {
      uVar5 = (long)param_3 / (long)(int)uVar7;
      param_3 = uVar5;
    }
  }
  else {
    uVar8 = 3;
    if (uVar3 != 0) {
      uVar8 = 1;
      uVar3 = 0xffffffff;
    }
    local_3d = '\x01';
    uVar7 = 0;
    if (_dl_x86_cpu_features == 1) {
LAB_006c6880:
      do {
        puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
        uVar4 = *puVar2;
        uVar5 = (ulong)uVar4;
        if ((uVar4 & 0x1f) == 0) goto LAB_006c6807;
        uVar6 = uVar4 >> 5 & 7;
        if (uVar6 == 2) {
          if ((uVar8 & 1) == 0) goto LAB_006c6880;
          uVar8 = uVar8 & 0xfffffffe;
          uVar7 = uVar4 >> 0xe & 0x3ff;
          uVar4 = uVar7;
        }
        else {
          if ((uVar6 != 3) || ((uVar8 & 2) == 0)) goto LAB_006c6880;
          uVar8 = uVar8 & 0xfffffffd;
          uVar3 = uVar4 >> 0xe & 0x3ff;
          uVar4 = puVar2[2] >> 1 & 1;
          local_3d = (char)uVar4;
        }
      } while (uVar8 != 0);
    }
    else {
LAB_006c68fb:
      do {
        puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
        uVar4 = *puVar2;
        uVar6 = uVar4 >> 5 & 7;
        if (uVar6 == 2) {
          if ((uVar8 & 1) == 0) goto LAB_006c68fb;
          uVar8 = uVar8 & 0xfffffffe;
          uVar7 = uVar4 >> 0xe & 0x3ff;
          uVar4 = uVar7;
        }
        else {
          if ((uVar6 != 3) || ((uVar8 & 2) == 0)) goto LAB_006c68fb;
          uVar8 = uVar8 & 0xfffffffd;
          uVar3 = uVar4 >> 0xe & 0x3ff;
          uVar4 = puVar2[2] >> 1 & 1;
          local_3d = (char)uVar4;
        }
      } while (uVar8 != 0);
    }
    uVar5 = (ulong)CONCAT31((int3)(uVar4 >> 8),_dl_x86_cpu_features == 3);
    if ((_dl_x86_cpu_features == 3 && DAT_0093dec8 == 6) || (DAT_0093dec4 < 0xb)) {
LAB_006c6a30:
      if (uVar7 != 0) {
LAB_006c6a34:
        uVar7 = uVar7 + 1;
      }
      if ((int)uVar3 < 1) {
        if (local_38 == 2) goto LAB_006c6a50;
LAB_006c6b36:
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = 0xffffffff;
          goto LAB_006c680e;
        }
        goto LAB_006c6824;
      }
      uVar8 = uVar3 + 1;
      if (local_38 != 2) goto LAB_006c680e;
LAB_006c6a50:
      if (uVar7 != 0) {
        uVar8 = uVar7;
        if ((((_dl_x86_cpu_features == 1) && (2 < uVar7)) && (DAT_0093dec8 == 6)) &&
           (DAT_0093decc - 0x37U < 0x27)) {
          uVar5 = 0x4800480001 >> ((byte)(DAT_0093decc - 0x37U) & 0x3f);
          uVar8 = 2;
          if ((uVar5 & 1) == 0) {
            uVar8 = uVar7;
          }
        }
        goto LAB_006c680e;
      }
    }
    else {
      uVar8 = (uint)(local_38 == 3 && uVar7 != 0);
      uVar5 = (ulong)uVar8;
      uVar4 = uVar8 | 2;
      if ((0 < (int)uVar3) || (uVar4 = (uint)(local_38 == 2 && uVar7 != 0) * 2 | uVar8, uVar4 != 0))
      {
        puVar2 = (uint *)cpuid_Extended_Topology_info(0xb);
        uVar5 = (ulong)*puVar2;
        uVar6 = puVar2[1] & 0xff;
        uVar8 = puVar2[3] & 0xff00;
        if ((uVar8 != 0) && (uVar6 != 0)) {
          if (local_38 != 2) {
            do {
              if (uVar8 == 0x100) {
                if ((uVar4 & 1) != 0) {
                  iVar1 = 0x1f;
                  if (uVar7 != 0) {
                    for (; uVar7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
                    }
                  }
                  uVar4 = uVar4 & 0xfffffffe;
                  uVar7 = ~(-1 << ((char)iVar1 + 1U & 0x1f)) & uVar6 - 1;
LAB_006c6a29:
                  if (uVar4 == 0) goto LAB_006c6a30;
                }
              }
              else if ((uVar8 == 0x200) && ((uVar4 & 2) != 0)) {
                iVar1 = 0x1f;
                if (uVar3 != 0) {
                  for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
                  }
                }
                uVar4 = uVar4 & 0xfffffffd;
                uVar3 = ~(-1 << ((char)iVar1 + 1U & 0x1f)) & uVar6 - 1;
                goto LAB_006c6a29;
              }
              puVar2 = (uint *)cpuid_Extended_Topology_info(0xb);
              uVar5 = (ulong)*puVar2;
              uVar8 = puVar2[3] & 0xff00;
              uVar6 = puVar2[1] & 0xff;
              if ((uVar6 == 0) || (uVar8 == 0)) goto LAB_006c6a30;
            } while( true );
          }
          do {
            if (uVar8 == 0x100) {
              if ((uVar4 & 1) != 0) {
                iVar1 = 0x1f;
                if (uVar7 != 0) {
                  for (; uVar7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
                  }
                }
                uVar4 = uVar4 & 0xfffffffe;
                uVar7 = ~(-1 << ((char)iVar1 + 1U & 0x1f)) & uVar6 - 1;
LAB_006c6afa:
                if (uVar4 == 0) break;
              }
            }
            else if ((uVar8 == 0x200) && ((uVar4 & 2) != 0)) {
              iVar1 = 0x1f;
              if (uVar7 != 0) {
                for (; uVar7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
                }
              }
              uVar4 = uVar4 & 0xfffffffd;
              uVar7 = ~(-1 << ((char)iVar1 + 1U & 0x1f)) & uVar6 - 1;
              goto LAB_006c6afa;
            }
            puVar2 = (uint *)cpuid_Extended_Topology_info(0xb);
            uVar5 = (ulong)*puVar2;
            uVar8 = puVar2[3] & 0xff00;
            uVar6 = puVar2[1] & 0xff;
            if ((uVar6 == 0) || (uVar8 == 0)) break;
          } while( true );
        }
        goto LAB_006c6a30;
      }
      if (uVar7 != 0) goto LAB_006c6a34;
      if (local_38 != 2) goto LAB_006c6b36;
    }
    uVar8 = 0;
    if (local_3d != '\0') goto LAB_006c6840;
  }
  uVar9 = uVar9 + param_3;
LAB_006c6840:
  *param_1 = uVar9;
  *param_2 = uVar8;
  return uVar5;
}

