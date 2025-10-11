
/* WARNING: Removing unreachable block (ram,0x0077f5e8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_relocate_object(code *param_1,undefined8 param_2,uint param_3,int param_4)

{
  ulong uVar1;
  ushort uVar2;
  undefined4 uVar3;
  code cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  short sVar13;
  code *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  uint uVar17;
  code *pcVar18;
  code *extraout_RDX;
  code *pcVar19;
  ulong *puVar20;
  code *pcVar21;
  code *pcVar22;
  ulong *puVar23;
  undefined1 *puVar24;
  code **ppcVar25;
  code **ppcVar26;
  size_t sVar27;
  void *__addr;
  code *pcVar28;
  uint uVar29;
  code *pcVar30;
  ulong uVar31;
  char *pcVar32;
  undefined8 *puVar33;
  long in_FS_OFFSET;
  code *local_f8;
  code *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  int local_d0;
  uint local_cc;
  undefined8 *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_b0 = param_2;
  local_d0 = param_4;
  if (((byte)param_1[0x31c] & 4) != 0) {
    return;
  }
  if ((param_4 == 0) && (*(long *)(param_1 + 0x100) != 0)) {
    if ((_dl_debug_mask & 0x20) != 0) {
      uVar29 = 0;
      pcVar16 = "";
LAB_0077f53b:
      pcVar32 = *(char **)(param_1 + 8);
      if ((*pcVar32 == '\0') && (pcVar32 = *(char **)_dl_argv, pcVar32 == (char *)0x0)) {
        pcVar32 = "<main program>";
      }
      local_90 = param_1;
      _dl_debug_printf("\nrelocation processing: %s%s\n",pcVar32,pcVar16);
      param_1 = local_90;
      goto LAB_0077de88;
    }
    uVar29 = 0;
    local_e8 = *(undefined8 **)(param_1 + 0xf0);
    ppcVar26 = &local_f8;
    uVar17 = 0;
    if (*(undefined8 **)(param_1 + 0xf0) == (undefined8 *)0x0) goto LAB_0077df18;
    uVar10 = (ulong)*(ushort *)(param_1 + 0x2b8);
    puVar20 = *(ulong **)(param_1 + 0x2a8);
    if (puVar20 + uVar10 * 7 <= puVar20) {
      local_e8 = (undefined8 *)0x0;
      ppcVar26 = &local_f8;
      uVar17 = uVar29;
      goto LAB_0077df18;
    }
LAB_0077f590:
    local_98 = (code *)CONCAT44(local_98._4_4_,param_3);
    local_90 = (code *)CONCAT44(local_90._4_4_,uVar29);
    puVar23 = puVar20;
    ppcVar25 = &local_f8;
    puVar33 = (undefined8 *)0x0;
    do {
      puVar24 = (undefined1 *)ppcVar25;
      puVar15 = puVar33;
      if ((*puVar23 & 0x2ffffffff) == 1) {
        puVar24 = (undefined1 *)((long)ppcVar25 + -0x30);
        ppcVar26 = (code **)((long)ppcVar25 + -0x30);
        *(undefined8 *)((long)ppcVar25 + -8) = *(undefined8 *)((long)ppcVar25 + -8);
        uVar10 = puVar23[2] & -_dl_pagesize;
        uVar29 = *(uint *)((long)puVar23 + 4);
        sVar27 = ((puVar23[2] - 1) + _dl_pagesize + puVar23[5] & -_dl_pagesize) - uVar10;
        pvVar8 = (void *)(uVar10 + *(long *)param_1);
        puVar15 = (undefined8 *)((ulong)((long)ppcVar25 + -0x21) & 0xfffffffffffffff0);
        puVar15[1] = sVar27;
        *puVar15 = pvVar8;
        uVar17 = uVar29 >> 2 & 1;
        if ((uVar29 & 2) != 0) {
          uVar17 = uVar17 | 2;
        }
        *(uint *)(puVar15 + 2) = uVar17;
        if ((uVar29 & 1) != 0) {
          uVar17 = uVar17 | 4;
          *(uint *)(puVar15 + 2) = uVar17;
        }
        *(undefined8 *)((long)ppcVar25 + -0x38) = 0x77f66d;
        iVar5 = mprotect(pvVar8,sVar27,uVar17 | 2);
        if (iVar5 < 0) {
          pcVar16 = "cannot make segment writable for relocation";
          goto LAB_0077faae;
        }
        puVar15[3] = puVar33;
        puVar20 = *(ulong **)(param_1 + 0x2a8);
        uVar10 = (ulong)*(ushort *)(param_1 + 0x2b8);
      }
      puVar23 = puVar23 + 7;
      ppcVar25 = (code **)puVar24;
      puVar33 = puVar15;
    } while (puVar23 < puVar20 + uVar10 * 7);
    ppcVar26 = (code **)puVar24;
    uVar29 = (uint)local_90;
    param_3 = (uint)local_98;
    local_e8 = puVar15;
  }
  else {
    uVar29 = param_3 & 1;
    if ((_dl_debug_mask & 0x20) != 0) {
      pcVar16 = " (lazy)";
      if (uVar29 == 0) {
        pcVar16 = "";
      }
      goto LAB_0077f53b;
    }
LAB_0077de88:
    local_e8 = *(undefined8 **)(param_1 + 0xf0);
    ppcVar26 = &local_f8;
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      uVar10 = (ulong)*(ushort *)(param_1 + 0x2b8);
      puVar20 = *(ulong **)(param_1 + 0x2a8);
      if (puVar20 < puVar20 + uVar10 * 7) goto LAB_0077f590;
      local_e8 = (undefined8 *)0x0;
      ppcVar26 = &local_f8;
    }
  }
  uVar17 = uVar29;
  if ((*(long *)(param_1 + 0xf8) != 0) && (uVar29 != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    if (((byte)param_1[0x31e] & 0x20) != 0) {
      lVar6 = lVar6 + *(long *)param_1;
    }
    if (*(long *)(lVar6 + 8) != 0) {
      *(long *)(param_1 + 0x3f8) = *(long *)(lVar6 + 8) + *(long *)param_1;
      *(long *)(param_1 + 0x400) = lVar6 + 0x18;
    }
    *(code **)(lVar6 + 8) = param_1;
    lVar11 = _dl_profile;
    if (local_d0 == 0) {
      if (_DAT_0093e000 == 0) {
        *(code **)(lVar6 + 0x10) = _dl_runtime_resolve_fxsave;
        uVar17 = 1;
      }
      else {
        pcVar18 = _dl_runtime_resolve_xsave;
        if ((DAT_0093df44 & 2) != 0) {
          pcVar18 = _dl_runtime_resolve_xsavec;
        }
        *(code **)(lVar6 + 0x10) = pcVar18;
        uVar17 = 1;
      }
    }
    else {
      pcVar18 = _dl_runtime_profile_avx512;
      if (((DAT_0093df08._2_1_ & 1) == 0) &&
         (pcVar18 = _dl_runtime_profile_sse, (DAT_0093deec._3_1_ & 0x10) != 0)) {
        pcVar18 = _dl_runtime_profile_avx;
      }
      *(code **)(lVar6 + 0x10) = pcVar18;
      uVar17 = 1;
      if (lVar11 != 0) {
        local_90 = param_1;
        *(undefined8 *)((long)ppcVar26 + -8) = 0x77f9b0;
        iVar5 = _dl_name_match_p();
        param_1 = local_90;
        if (iVar5 != 0) {
          _dl_profile_map = local_90;
        }
      }
    }
  }
LAB_0077df18:
  pcVar18 = *(code **)param_1;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 0x78) == 0) {
    pcVar22 = (code *)0x0;
    lVar6 = 0;
    pcVar14 = (code *)0x0;
  }
  else {
    pcVar14 = *(code **)(*(long *)(param_1 + 0x78) + 8);
    if (((byte)param_1[0x31e] & 0x20) != 0) {
      pcVar14 = pcVar14 + (long)pcVar18;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 8);
    pcVar22 = pcVar14 + lVar6;
    local_78._8_8_ = lVar6;
    local_78._0_8_ = pcVar14;
    if (*(long *)(param_1 + 0x188) != 0) {
      local_68._8_8_ = 0;
      local_68._0_8_ = *(ulong *)(*(long *)(param_1 + 0x188) + 8);
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    pcVar21 = *(code **)(*(long *)(param_1 + 0xf8) + 8);
    if (((byte)param_1[0x31e] & 0x20) != 0) {
      pcVar21 = *(code **)(*(long *)(param_1 + 0xf8) + 8) + (long)pcVar18;
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    if (pcVar21 + lVar11 == pcVar22) {
      lVar6 = lVar6 - lVar11;
      local_78._8_8_ = lVar6;
      pcVar22 = pcVar14 + lVar6;
    }
    if ((uVar17 == 0) && (pcVar21 == pcVar22)) {
      local_78._8_8_ = lVar11 + lVar6;
    }
    else {
      local_48 = ZEXT416(uVar17) << 0x40;
      local_58._8_8_ = lVar11;
      local_58._0_8_ = pcVar21;
    }
  }
  local_c8 = (undefined8 *)local_78;
  local_cc = param_3 & 0x2000000;
  local_e0 = &local_38;
  do {
    pcVar22 = (code *)*local_c8;
    pcVar14 = pcVar22 + local_c8[1];
    local_98 = pcVar14;
    if (*(int *)(local_c8 + 3) == 0) {
      pcVar21 = pcVar22 + local_c8[2] * 0x18;
      local_90 = *(code **)(*(long *)(param_1 + 0x70) + 8) + (long)pcVar18;
      if (((byte)param_1[0x31e] & 0x20) == 0) {
        local_90 = *(code **)(*(long *)(param_1 + 0x70) + 8);
      }
      if (param_1 == (code *)0x0) {
LAB_0077e416:
        lVar6 = *(long *)(param_1 + 0x1d0);
      }
      else {
        if ((pcVar18 != (code *)0x0) || (*(long *)(param_1 + 0x240) == 0)) {
          for (; pcVar22 < pcVar21; pcVar22 = pcVar22 + 0x18) {
            if ((*(uint *)(pcVar22 + 8) != 0x26) && (*(uint *)(pcVar22 + 8) != 8)) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)ppcVar26 + -8) = 0x77fa8b;
              __assert_fail("ELFW(R_TYPE) (reloc->r_info) == R_X86_64_RELATIVE",
                            "../sysdeps/x86_64/dl-machine.h",0x216,"elf_machine_rela_relative");
            }
            *(code **)(pcVar18 + *(long *)pcVar22) = pcVar18 + *(long *)(pcVar22 + 0x10);
          }
          goto LAB_0077e416;
        }
        lVar6 = *(long *)(param_1 + 0x1d0);
      }
      if (lVar6 == 0) {
        local_c0 = (code *)0x0;
        if (pcVar21 < pcVar14) {
          local_b8 = (code *)0x0;
          local_a0 = pcVar18;
          do {
            uVar10 = *(ulong *)(pcVar21 + 8);
            pcVar22 = local_a0 + *(long *)pcVar21;
            uVar31 = uVar10 & 0xffffffff;
            pcVar18 = local_90 + (uVar10 >> 0x20) * 0x18;
            if ((int)uVar10 == 0x25) {
              local_c0 = pcVar21;
              if (local_b8 == (code *)0x0) {
                local_b8 = pcVar21;
              }
              goto LAB_0077ef40;
            }
            local_80 = pcVar18;
            if ((uVar31 == 8) || (uVar31 == 0x26)) {
              *(long *)pcVar22 = *(long *)(pcVar21 + 0x10) + *(long *)param_1;
              goto LAB_0077ef40;
            }
            if (uVar31 == 0) goto LAB_0077ef40;
            cVar4 = pcVar18[4];
            if (((byte)cVar4 >> 4 == 0) || (((byte)pcVar18[5] & 3) - 1 < 2)) {
              sVar13 = *(short *)(pcVar18 + 6);
              pcVar14 = param_1;
              if (sVar13 == -0xf) goto LAB_0077f3b2;
LAB_0077f274:
              lVar6 = *(long *)pcVar14;
LAB_0077f277:
              pcVar28 = (code *)(lVar6 + *(long *)(local_80 + 8));
              if (((((byte)cVar4 & 0xf) == 10) && (sVar13 != 0)) && (local_cc == 0)) {
                if ((param_1 != pcVar14) && (((byte)pcVar14[0x31c] & 4) == 0)) {
                  lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                  if (((byte)param_1[0x31e] & 0x20) != 0) {
                    lVar6 = lVar6 + *(long *)param_1;
                  }
                  lVar6 = lVar6 + (ulong)*(uint *)pcVar18;
                  lVar11 = *(long *)(param_1 + 8);
                  pcVar16 = *(char **)_dl_argv;
                  if (((byte)pcVar14[0x31c] & 3) == 0) goto LAB_0077fa8b;
                  lVar6 = *(long *)(pcVar14 + 8);
                  if (pcVar16 == (char *)0x0) {
                    pcVar16 = "<program name unknown>";
                  }
                  local_f0 = pcVar28;
                  local_d8 = pcVar22;
                  local_a8 = pcVar14;
                  *(undefined8 *)((long)ppcVar26 + -8) = 0x77f321;
                  _dl_error_printf("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar16,
                                   lVar11,lVar6);
                  pcVar28 = local_f0;
                  pcVar22 = local_d8;
                  pcVar14 = local_a8;
                }
                local_d8 = pcVar22;
                local_a8 = pcVar14;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f347;
                pcVar28 = (code *)(*pcVar28)();
                pcVar22 = local_d8;
                pcVar14 = local_a8;
              }
            }
            else {
              uVar1 = uVar31 - 7;
              uVar29 = (uint)(uVar31 == 5) * 2 | (uint)(uVar31 == 6) << 2;
              if (pcVar18 == *(code **)(param_1 + 0x410)) {
                if (uVar1 < 0x1e) {
                  if ((*(uint *)(CSWTCH_102 + uVar1 * 4) | uVar29) != *(uint *)(param_1 + 0x418))
                  goto LAB_0077ed8b;
                }
                else if (*(uint *)(param_1 + 0x418) != uVar29) goto LAB_0077ed96;
                local_80 = *(code **)(param_1 + 0x428);
                pcVar14 = *(code **)(param_1 + 0x420);
              }
              else {
                if (uVar1 < 0x1e) {
LAB_0077ed8b:
                  uVar29 = uVar29 | *(uint *)(CSWTCH_102 + uVar1 * 4);
                }
LAB_0077ed96:
                uVar17 = *(uint *)pcVar18;
                *(uint *)(param_1 + 0x418) = uVar29;
                *(code **)(param_1 + 0x410) = pcVar18;
                lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                lVar11 = 0;
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar11 = *(long *)param_1;
                }
                *(undefined8 *)((long)ppcVar26 + -8) = 0;
                uVar7 = local_b0;
                *(undefined8 *)((long)ppcVar26 + -0x10) = 9;
                local_a8 = pcVar22;
                *(undefined8 *)((long)ppcVar26 + -0x18) = 0x77edea;
                pcVar14 = (code *)_dl_lookup_symbol_x((ulong)uVar17 + lVar6 + lVar11,param_1,
                                                      &local_80,uVar7,0);
                *(code **)(param_1 + 0x420) = pcVar14;
                *(code **)(param_1 + 0x428) = local_80;
                pcVar22 = local_a8;
              }
              pcVar28 = (code *)0x0;
              if (local_80 != (code *)0x0) {
                sVar13 = *(short *)(local_80 + 6);
                cVar4 = local_80[4];
                if (sVar13 != -0xf) goto LAB_0077f274;
LAB_0077f3b2:
                lVar6 = 0;
                goto LAB_0077f277;
              }
            }
            pcVar19 = local_80;
            switch(uVar31) {
            default:
              goto switchD_0077e5f7_caseD_77ea60;
            case 2:
              lVar6 = *(long *)(pcVar21 + 0x10);
              uVar29 = (uint)(pcVar28 + (lVar6 - (long)pcVar22));
              *(uint *)pcVar22 = uVar29;
              if (pcVar28 + (lVar6 - (long)pcVar22) == (code *)(long)(int)uVar29) break;
              pcVar16 = "%s: Symbol `%s\' causes overflow in R_X86_64_PC32 relocation\n";
              goto LAB_0077f0c2;
            case 5:
              if (local_80 != (code *)0x0) {
                uVar10 = *(ulong *)(local_80 + 0x10);
                if (*(ulong *)(pcVar18 + 0x10) <= *(ulong *)(local_80 + 0x10)) {
                  uVar10 = *(ulong *)(pcVar18 + 0x10);
                }
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f157;
                memcpy(pcVar22,pcVar28,uVar10);
                if ((*(ulong *)(pcVar18 + 0x10) < *(ulong *)(pcVar19 + 0x10)) ||
                   ((*(ulong *)(pcVar19 + 0x10) < *(ulong *)(pcVar18 + 0x10) && (_dl_verbose != 0)))
                   ) {
                  pcVar16 = 
                  "%s: Symbol `%s\' has different size in shared object, consider re-linking\n";
                  goto LAB_0077f0c2;
                }
              }
              break;
            case 0x10:
              if (pcVar14 != (code *)0x0) {
                *(long *)pcVar22 = *(long *)(pcVar14 + 0x460);
              }
              break;
            case 0x11:
              if (local_80 != (code *)0x0) {
                *(long *)pcVar22 = *(long *)(pcVar21 + 0x10) + *(long *)(local_80 + 8);
              }
              break;
            case 0x12:
              if (local_80 != (code *)0x0) {
                lVar6 = *(long *)(pcVar14 + 0x458);
                if (lVar6 + 1U < 2) {
                  local_d8 = pcVar22;
                  local_a8 = pcVar14;
                  *(undefined8 *)((long)ppcVar26 + -8) = 0x77f9e1;
                  _dl_allocate_static_tls(pcVar14);
                  lVar6 = *(long *)(local_a8 + 0x458);
                  pcVar22 = local_d8;
                }
                *(long *)pcVar22 = (*(long *)(local_80 + 8) - lVar6) + *(long *)(pcVar21 + 0x10);
              }
              break;
            case 0x20:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 10:
              lVar6 = *(long *)(pcVar21 + 0x10);
              pcVar16 = "%s: Symbol `%s\' causes overflow in R_X86_64_32 relocation\n";
              *(uint *)pcVar22 = (uint)(pcVar28 + lVar6);
              if ((ulong)(pcVar28 + lVar6) >> 0x20 != 0) {
LAB_0077f0c2:
                lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar6 = lVar6 + *(long *)param_1;
                }
                uVar29 = *(uint *)pcVar18;
                pcVar32 = *(char **)_dl_argv;
                if (pcVar32 == (char *)0x0) {
                  pcVar32 = "<program name unknown>";
                }
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f0ff;
                _dl_error_printf(pcVar16,pcVar32,(ulong)uVar29 + lVar6);
              }
              break;
            case 0x21:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 1:
            case 6:
            case 7:
              *(code **)pcVar22 = pcVar28 + *(long *)(pcVar21 + 0x10);
              break;
            case 0x24:
              if (local_80 == (code *)0x0) {
                *(long *)(pcVar22 + 8) = *(long *)(pcVar21 + 0x10);
                *(code **)pcVar22 = _dl_tlsdesc_undefweak;
              }
              else {
                lVar6 = *(long *)(pcVar14 + 0x458);
                if (lVar6 + 1U < 2) {
                  local_d8 = pcVar22;
                  local_a8 = pcVar14;
                  *(undefined8 *)((long)ppcVar26 + -8) = 0x77fa15;
                  _dl_allocate_static_tls(pcVar14);
                  lVar6 = *(long *)(local_a8 + 0x458);
                  pcVar22 = local_d8;
                }
                *(long *)(pcVar22 + 8) =
                     (*(long *)(local_80 + 8) - lVar6) + *(long *)(pcVar21 + 0x10);
                *(code **)pcVar22 = _dl_tlsdesc_return;
              }
              break;
            case 0x25:
              pcVar18 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
              if (local_cc == 0) {
                local_a8 = pcVar22;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f121;
                pcVar18 = (code *)(*pcVar18)();
                pcVar22 = local_a8;
              }
              *(code **)pcVar22 = pcVar18;
            }
LAB_0077ef40:
            pcVar21 = pcVar21 + 0x18;
          } while (pcVar21 < local_98);
          if ((local_b8 != (code *)0x0) && (local_b8 <= local_c0)) {
            local_98 = local_a0;
            pcVar32 = "%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n";
            pcVar21 = local_b8;
            pcVar22 = local_c0;
            goto LAB_0077ef9d;
          }
        }
      }
      else {
        local_a0 = *(code **)(lVar6 + 8);
        if (((byte)param_1[0x31e] & 0x20) != 0) {
          local_a0 = local_a0 + *(long *)param_1;
        }
        if (pcVar21 < pcVar14) {
          local_d8 = (code *)0x0;
          local_c0 = (code *)0x0;
          local_a8 = pcVar18;
          do {
            uVar10 = *(ulong *)(pcVar21 + 8);
            pcVar22 = local_a8 + *(long *)pcVar21;
            uVar31 = uVar10 & 0xffffffff;
            uVar2 = *(ushort *)(local_a0 + (uVar10 >> 0x20) * 2);
            pcVar18 = local_90 + (uVar10 >> 0x20) * 0x18;
            if ((int)uVar10 == 0x25) {
LAB_0077ea70:
              local_d8 = pcVar21;
              if (local_c0 == (code *)0x0) {
                local_c0 = pcVar21;
              }
              goto LAB_0077e610;
            }
            local_80 = pcVar18;
            if ((uVar31 == 8) || (uVar31 == 0x26)) {
              *(long *)pcVar22 = *(long *)(pcVar21 + 0x10) + *(long *)param_1;
              goto LAB_0077e610;
            }
            if (uVar31 == 0) goto LAB_0077e610;
            cVar4 = pcVar18[4];
            if (((byte)cVar4 >> 4 == 0) || (((byte)pcVar18[5] & 3) - 1 < 2)) {
              sVar13 = *(short *)(pcVar18 + 6);
              pcVar14 = param_1;
              if (sVar13 == -0xf) goto LAB_0077eac2;
LAB_0077e96c:
              lVar6 = *(long *)pcVar14;
LAB_0077e96f:
              pcVar28 = (code *)(lVar6 + *(long *)(local_80 + 8));
              if (((((byte)cVar4 & 0xf) != 10) || (local_cc != 0)) || (sVar13 == 0))
              goto LAB_0077e5df;
              if ((param_1 != pcVar14) && (((byte)pcVar14[0x31c] & 4) == 0)) {
                lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar6 = lVar6 + *(long *)param_1;
                }
                lVar6 = lVar6 + (ulong)*(uint *)pcVar18;
                lVar11 = *(long *)(param_1 + 8);
                pcVar16 = *(char **)_dl_argv;
                if (((byte)pcVar14[0x31c] & 3) == 0) goto LAB_0077fa8b;
                lVar6 = *(long *)(pcVar14 + 8);
                if (pcVar16 == (char *)0x0) {
                  pcVar16 = "<program name unknown>";
                }
                local_f8 = pcVar28;
                local_f0 = pcVar22;
                local_b8 = pcVar14;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77ea19;
                _dl_error_printf("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar16,
                                 lVar11,lVar6);
                pcVar28 = local_f8;
                pcVar22 = local_f0;
                pcVar14 = local_b8;
              }
              local_f0 = pcVar14;
              local_b8 = pcVar22;
              *(undefined8 *)((long)ppcVar26 + -8) = 0x77ea3f;
              pcVar28 = (code *)(*pcVar28)();
              pcVar22 = local_b8;
              pcVar14 = local_f0;
              if (uVar31 < 0x26) goto LAB_0077e5e9;
switchD_0077e5f7_caseD_77ea60:
              *(undefined8 *)((long)ppcVar26 + -8) = 0x77ea6d;
              _dl_reloc_bad_type(param_1,uVar10 & 0xffffffff,0);
              goto LAB_0077ea70;
            }
            uVar29 = (uint)(uVar31 == 6) << 2 | (uint)(uVar31 == 5) * 2;
            uVar1 = uVar31 - 7;
            if (pcVar18 == *(code **)(param_1 + 0x410)) {
              if (uVar1 < 0x1e) {
                if ((*(uint *)(CSWTCH_102 + uVar1 * 4) | uVar29) != *(uint *)(param_1 + 0x418))
                goto LAB_0077e52f;
              }
              else if (*(uint *)(param_1 + 0x418) != uVar29) goto LAB_0077e53a;
              local_80 = *(code **)(param_1 + 0x428);
              pcVar14 = *(code **)(param_1 + 0x420);
            }
            else {
              if (uVar1 < 0x1e) {
LAB_0077e52f:
                uVar29 = uVar29 | *(uint *)(CSWTCH_102 + uVar1 * 4);
              }
LAB_0077e53a:
              *(uint *)(param_1 + 0x418) = uVar29;
              *(code **)(param_1 + 0x410) = pcVar18;
              lVar6 = *(long *)(param_1 + 0x2e8) + (ulong)(uVar2 & 0x7fff) * 0x18;
              if ((lVar6 != 0) && (*(int *)(lVar6 + 8) == 0)) {
                lVar6 = 0;
              }
              uVar29 = *(uint *)pcVar18;
              lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 8);
              lVar9 = 0;
              if (((byte)param_1[0x31e] & 0x20) != 0) {
                lVar9 = *(long *)param_1;
              }
              *(undefined8 *)((long)ppcVar26 + -8) = 0;
              uVar7 = local_b0;
              *(undefined8 *)((long)ppcVar26 + -0x10) = 9;
              local_b8 = pcVar22;
              *(undefined8 *)((long)ppcVar26 + -0x18) = 0x77e5ab;
              pcVar14 = (code *)_dl_lookup_symbol_x((ulong)uVar29 + lVar11 + lVar9,param_1,&local_80
                                                    ,uVar7,lVar6);
              *(code **)(param_1 + 0x420) = pcVar14;
              *(code **)(param_1 + 0x428) = local_80;
              pcVar22 = local_b8;
            }
            pcVar28 = (code *)0x0;
            if (local_80 != (code *)0x0) {
              sVar13 = *(short *)(local_80 + 6);
              cVar4 = local_80[4];
              if (sVar13 != -0xf) goto LAB_0077e96c;
LAB_0077eac2:
              lVar6 = 0;
              goto LAB_0077e96f;
            }
LAB_0077e5df:
            if (0x25 < uVar31) goto switchD_0077e5f7_caseD_77ea60;
LAB_0077e5e9:
            pcVar19 = local_80;
            switch((long)&switchD_0077e5f7::switchdataD_008255c0 +
                   (long)(int)(&switchD_0077e5f7::switchdataD_008255c0)[uVar31]) {
            case 0x77e5fa:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 0x77e602:
              *(code **)pcVar22 = pcVar28 + *(long *)(pcVar21 + 0x10);
              break;
            case 0x77e7a3:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 0x77e7ab:
              lVar6 = *(long *)(pcVar21 + 0x10);
              pcVar16 = "%s: Symbol `%s\' causes overflow in R_X86_64_32 relocation\n";
              *(uint *)pcVar22 = (uint)(pcVar28 + lVar6);
              if ((ulong)(pcVar28 + lVar6) >> 0x20 != 0) {
LAB_0077e7c3:
                lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar6 = lVar6 + *(long *)param_1;
                }
                uVar29 = *(uint *)pcVar18;
                pcVar32 = *(char **)_dl_argv;
                if (pcVar32 == (char *)0x0) {
                  pcVar32 = "<program name unknown>";
                }
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77e800;
                _dl_error_printf(pcVar16,pcVar32,(ulong)uVar29 + lVar6);
              }
              break;
            case 0x77e805:
              if (pcVar14 != (code *)0x0) {
                *(long *)pcVar22 = *(long *)(pcVar14 + 0x460);
              }
              break;
            case 0x77e81d:
              if (local_80 != (code *)0x0) {
                lVar6 = *(long *)(pcVar14 + 0x458);
                if (lVar6 + 1U < 2) {
                  local_f0 = pcVar22;
                  local_b8 = pcVar14;
                  *(undefined8 *)((long)ppcVar26 + -8) = 0x77f8e5;
                  _dl_allocate_static_tls(pcVar14);
                  lVar6 = *(long *)(local_b8 + 0x458);
                  pcVar22 = local_f0;
                }
                *(long *)pcVar22 = (*(long *)(local_80 + 8) - lVar6) + *(long *)(pcVar21 + 0x10);
              }
              break;
            case 0x77e852:
              if (local_80 != (code *)0x0) {
                *(long *)pcVar22 = *(long *)(pcVar21 + 0x10) + *(long *)(local_80 + 8);
              }
              break;
            case 0x77e86f:
              if (local_80 == (code *)0x0) {
                *(long *)(pcVar22 + 8) = *(long *)(pcVar21 + 0x10);
                *(code **)pcVar22 = _dl_tlsdesc_undefweak;
              }
              else {
                lVar6 = *(long *)(pcVar14 + 0x458);
                if (lVar6 + 1U < 2) {
                  local_f0 = pcVar22;
                  local_b8 = pcVar14;
                  *(undefined8 *)((long)ppcVar26 + -8) = 0x77f8b1;
                  _dl_allocate_static_tls(pcVar14);
                  lVar6 = *(long *)(local_b8 + 0x458);
                  pcVar22 = local_f0;
                }
                *(long *)(pcVar22 + 8) =
                     (*(long *)(local_80 + 8) - lVar6) + *(long *)(pcVar21 + 0x10);
                *(code **)pcVar22 = _dl_tlsdesc_return;
              }
              break;
            case 0x77e8af:
              pcVar18 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
              if (local_cc == 0) {
                local_b8 = pcVar22;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77e8ca;
                pcVar18 = (code *)(*pcVar18)();
                pcVar22 = local_b8;
              }
              *(code **)pcVar22 = pcVar18;
              break;
            case 0x77e8d9:
              if (local_80 != (code *)0x0) {
                uVar10 = *(ulong *)(pcVar18 + 0x10);
                if (*(ulong *)(local_80 + 0x10) < *(ulong *)(pcVar18 + 0x10)) {
                  uVar10 = *(ulong *)(local_80 + 0x10);
                }
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77e900;
                memcpy(pcVar22,pcVar28,uVar10);
                if ((*(ulong *)(pcVar18 + 0x10) < *(ulong *)(pcVar19 + 0x10)) ||
                   ((*(ulong *)(pcVar19 + 0x10) < *(ulong *)(pcVar18 + 0x10) && (_dl_verbose != 0)))
                   ) {
                  pcVar16 = 
                  "%s: Symbol `%s\' has different size in shared object, consider re-linking\n";
                  goto LAB_0077e7c3;
                }
              }
              break;
            case 0x77e930:
              lVar6 = *(long *)(pcVar21 + 0x10);
              uVar29 = (uint)(pcVar28 + (lVar6 - (long)pcVar22));
              *(uint *)pcVar22 = uVar29;
              if (pcVar28 + (lVar6 - (long)pcVar22) == (code *)(long)(int)uVar29) break;
              pcVar16 = "%s: Symbol `%s\' causes overflow in R_X86_64_PC32 relocation\n";
              goto LAB_0077e7c3;
            case 0x77ea60:
              goto switchD_0077e5f7_caseD_77ea60;
            }
LAB_0077e610:
            pcVar18 = local_d8;
            pcVar21 = pcVar21 + 0x18;
          } while (pcVar21 < local_98);
          pcVar22 = local_c0;
          if (local_c0 != (code *)0x0) {
            for (; pcVar22 <= pcVar18; pcVar22 = pcVar22 + 0x18) {
              if ((int)*(ulong *)(pcVar22 + 8) == 0x25) {
                uVar10 = *(ulong *)(pcVar22 + 8) >> 0x20;
                local_98 = local_a8 + *(long *)pcVar22;
                uVar2 = *(ushort *)(local_a0 + uVar10 * 2);
                pcVar14 = local_90 + uVar10 * 0x18;
                cVar4 = pcVar14[4];
                pcVar21 = param_1;
                local_80 = pcVar14;
                if (((byte)cVar4 >> 4 == 0) || (((byte)pcVar14[5] & 3) - 1 < 2)) {
LAB_0077ead6:
                  pcVar28 = *(code **)(local_80 + 8);
                  if (*(short *)(local_80 + 6) == -0xf) {
                    if (((byte)cVar4 & 0xf) == 10) goto LAB_0077eb02;
                    goto LAB_0077e780;
                  }
                  if ((((byte)cVar4 & 0xf) != 10) || (*(short *)(local_80 + 6) == 0))
                  goto LAB_0077e780;
                  pcVar28 = pcVar28 + *(long *)pcVar21;
LAB_0077eb02:
                  if (local_cc == 0) {
                    if ((param_1 != pcVar21) && (((byte)pcVar21[0x31c] & 4) == 0)) {
                      lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                      if (((byte)param_1[0x31e] & 0x20) != 0) {
                        lVar6 = lVar6 + *(long *)param_1;
                      }
                      lVar6 = lVar6 + (ulong)*(uint *)pcVar14;
                      lVar11 = *(long *)(param_1 + 8);
                      pcVar16 = *(char **)_dl_argv;
                      if (((byte)pcVar21[0x31c] & 3) == 0) goto LAB_0077fa8b;
                      lVar6 = *(long *)(pcVar21 + 8);
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = "<program name unknown>";
                      }
                      local_b8 = pcVar28;
                      *(undefined8 *)((long)ppcVar26 + -8) = 0x77eb79;
                      _dl_error_printf("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",
                                       pcVar16,lVar11,lVar6);
                      pcVar28 = local_b8;
                    }
                    *(undefined8 *)((long)ppcVar26 + -8) = 0x77eb83;
                    (*pcVar28)();
                    pcVar14 = (code *)(*(long *)(pcVar22 + 0x10) + *(long *)param_1);
                    goto LAB_0077e792;
                  }
                  pcVar14 = (code *)(*(long *)(pcVar22 + 0x10) + *(long *)param_1);
                }
                else {
                  if ((pcVar14 == *(code **)(param_1 + 0x410)) && (*(uint *)(param_1 + 0x418) == 0))
                  {
                    local_80 = *(code **)(param_1 + 0x428);
                    pcVar21 = *(code **)(param_1 + 0x420);
                  }
                  else {
                    *(code **)(param_1 + 0x410) = pcVar14;
                    *(uint *)(param_1 + 0x418) = 0;
                    lVar6 = *(long *)(param_1 + 0x2e8) + (ulong)(uVar2 & 0x7fff) * 0x18;
                    if ((lVar6 != 0) && (*(int *)(lVar6 + 8) == 0)) {
                      lVar6 = 0;
                    }
                    uVar29 = *(uint *)pcVar14;
                    lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                    lVar9 = 0;
                    if (((byte)param_1[0x31e] & 0x20) != 0) {
                      lVar9 = *(long *)param_1;
                    }
                    *(undefined8 *)((long)ppcVar26 + -8) = 0;
                    uVar7 = local_b0;
                    *(undefined8 *)((long)ppcVar26 + -0x10) = 9;
                    local_b8 = pcVar14;
                    *(undefined8 *)((long)ppcVar26 + -0x18) = 0x77e74e;
                    pcVar21 = (code *)_dl_lookup_symbol_x((ulong)uVar29 + lVar11 + lVar9,param_1,
                                                          &local_80,uVar7,lVar6,0);
                    *(code **)(param_1 + 0x420) = pcVar21;
                    *(code **)(param_1 + 0x428) = local_80;
                    pcVar14 = local_b8;
                  }
                  if (local_80 != (code *)0x0) {
                    cVar4 = local_80[4];
                    goto LAB_0077ead6;
                  }
LAB_0077e780:
                  pcVar14 = (code *)(*(long *)(pcVar22 + 0x10) + *(long *)param_1);
                  if (local_cc == 0) {
LAB_0077e792:
                    *(undefined8 *)((long)ppcVar26 + -8) = 0x77e794;
                    pcVar14 = (code *)(*pcVar14)();
                  }
                }
                *(code **)local_98 = pcVar14;
              }
            }
          }
        }
      }
    }
    else {
      pcVar19 = (code *)0x0;
      pcVar21 = (code *)0x0;
      pcVar28 = pcVar14;
      if (pcVar22 < pcVar14) {
        do {
          while( true ) {
            uVar10 = *(ulong *)(pcVar22 + 8);
            if ((int)uVar10 != 0x25) break;
            if (pcVar21 == (code *)0x0) {
              pcVar21 = pcVar22;
            }
            pcVar30 = pcVar22 + 0x18;
            pcVar19 = pcVar22;
            pcVar22 = pcVar30;
            if (pcVar28 <= pcVar30) goto LAB_0077e0ac;
          }
          pcVar32 = (char *)(pcVar18 + *(long *)pcVar22);
          if ((uVar10 & 0xffffffff) == 7) {
            if (*(long *)(param_1 + 0x3f8) == 0) {
              *(code **)pcVar32 = pcVar18 + *(long *)pcVar32;
            }
            else {
              *(long *)pcVar32 =
                   *(long *)(param_1 + 0x3f8) + ((long)pcVar32 - *(long *)(param_1 + 0x400)) * 2;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) != 0x24) {
              *(undefined8 *)((long)ppcVar26 + -8) = 0x77f4f4;
              _dl_reloc_bad_type(param_1,uVar10,1);
              pcVar19 = extraout_RDX;
LAB_0077f4f4:
              cVar4 = pcVar19[4];
LAB_0077f3c6:
              pcVar30 = *(code **)(pcVar19 + 8);
              if (*(short *)(pcVar19 + 6) == -0xf) {
                if (((byte)cVar4 & 0xf) != 10) goto LAB_0077f086;
              }
              else {
                if (((byte)cVar4 & 0xf) != 10) goto LAB_0077f086;
                if (*(short *)(pcVar19 + 6) == 0) goto LAB_0077f086;
                pcVar30 = pcVar30 + *(long *)pcVar14;
              }
              if (local_cc != 0) {
                pcVar14 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
                goto LAB_0077f09a;
              }
              if ((param_1 != pcVar14) && (((byte)pcVar14[0x31c] & 4) == 0)) {
                lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar6 = lVar6 + *(long *)param_1;
                }
                lVar6 = lVar6 + (ulong)*(uint *)pcVar28;
                lVar11 = *(long *)(param_1 + 8);
                pcVar16 = *(char **)_dl_argv;
                if (((byte)pcVar14[0x31c] & 3) == 0) goto LAB_0077fa8b;
                lVar6 = *(long *)(pcVar14 + 8);
                if (pcVar16 == (char *)0x0) {
                  pcVar16 = "<program name unknown>";
                }
                local_a0 = pcVar30;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f46c;
                _dl_error_printf(pcVar32,pcVar16,lVar11,lVar6);
                pcVar30 = local_a0;
              }
              *(undefined8 *)((long)ppcVar26 + -8) = 0x77f476;
              (*pcVar30)();
              pcVar14 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
              do {
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f09a;
                pcVar14 = (code *)(*pcVar14)();
LAB_0077f09a:
                do {
                  *(code **)pcVar18 = pcVar14;
                  do {
                    pcVar21 = pcVar21 + 0x18;
                    if (pcVar22 < pcVar21) goto LAB_0077e0fa;
LAB_0077ef9d:
                  } while ((int)*(ulong *)(pcVar21 + 8) != 0x25);
                  pcVar18 = local_98 + *(long *)pcVar21;
                  pcVar19 = local_90 + (*(ulong *)(pcVar21 + 8) >> 0x20) * 0x18;
                  cVar4 = pcVar19[4];
                  pcVar14 = param_1;
                  pcVar28 = pcVar19;
                  local_80 = pcVar19;
                  if (((byte)cVar4 >> 4 == 0) || (((byte)pcVar19[5] & 3) - 1 < 2))
                  goto LAB_0077f3c6;
                  if ((pcVar19 == *(code **)(param_1 + 0x410)) && (*(uint *)(param_1 + 0x418) == 0))
                  {
                    local_80 = *(code **)(param_1 + 0x428);
                    pcVar14 = *(code **)(param_1 + 0x420);
                  }
                  else {
                    uVar29 = *(uint *)pcVar19;
                    *(code **)(param_1 + 0x410) = pcVar19;
                    *(uint *)(param_1 + 0x418) = 0;
                    lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                    lVar11 = 0;
                    if (((byte)param_1[0x31e] & 0x20) != 0) {
                      lVar11 = *(long *)param_1;
                    }
                    *(undefined8 *)((long)ppcVar26 + -8) = 0;
                    uVar7 = local_b0;
                    *(undefined8 *)((long)ppcVar26 + -0x10) = 9;
                    local_a0 = pcVar19;
                    *(undefined8 *)((long)ppcVar26 + -0x18) = 0x77f055;
                    pcVar14 = (code *)_dl_lookup_symbol_x((ulong)uVar29 + lVar6 + lVar11,param_1,
                                                          &local_80,uVar7,0);
                    *(code **)(param_1 + 0x420) = pcVar14;
                    *(code **)(param_1 + 0x428) = local_80;
                    pcVar28 = local_a0;
                  }
                  pcVar19 = local_80;
                  if (local_80 != (code *)0x0) goto LAB_0077f4f4;
LAB_0077f086:
                  pcVar14 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
                } while (local_cc != 0);
              } while( true );
            }
            lVar11 = 0;
            lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            if (((byte)param_1[0x31e] & 0x20) != 0) {
              lVar11 = *(long *)param_1;
              lVar6 = lVar6 + lVar11;
            }
            lVar9 = *(long *)(param_1 + 0x1d0);
            local_90 = (code *)(lVar6 + (uVar10 >> 0x20) * 0x18);
            if (lVar9 != 0) {
              lVar9 = *(long *)(param_1 + 0x2e8) +
                      (ulong)(*(ushort *)((uVar10 >> 0x20) * 2 + lVar11 + *(long *)(lVar9 + 8)) &
                             0x7fff) * 0x18;
            }
            cVar4 = local_90[4];
            pcVar30 = param_1;
            local_80 = local_90;
            if (((byte)cVar4 >> 4 == 0) ||
               (uVar29 = ((byte)local_90[5] & 3) - 1, pcVar14 = (code *)(ulong)uVar29, uVar29 < 2))
            {
LAB_0077ebd6:
              uVar2 = *(ushort *)(local_80 + 6);
              pcVar14 = (code *)(ulong)uVar2;
              if (uVar2 == 0xfff1) {
                local_a0 = (code *)0x0;
              }
              else {
                local_a0 = *(code **)pcVar30;
              }
              local_98 = *(code **)(local_80 + 8);
              if (((((byte)cVar4 & 0xf) == 10) && (uVar2 != 0)) && (local_cc == 0)) {
                if ((param_1 != pcVar30) && (((byte)pcVar30[0x31c] & 4) == 0)) {
                  lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                  if (((byte)param_1[0x31e] & 0x20) != 0) {
                    lVar6 = lVar6 + *(long *)param_1;
                  }
                  pcVar16 = *(char **)_dl_argv;
                  lVar6 = lVar6 + (ulong)*(uint *)local_90;
                  lVar11 = *(long *)(param_1 + 8);
                  if (((byte)pcVar30[0x31c] & 3) == 0) {
LAB_0077fa8b:
                    if (pcVar16 == (char *)0x0) {
                      pcVar16 = "<program name unknown>";
                    }
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((long)ppcVar26 + -8) = 0x77faa4;
                    _dl_fatal_printf("%s: IFUNC symbol \'%s\' referenced in \'%s\' is defined in the executable and creates an unsatisfiable circular dependency.\n"
                                     ,pcVar16,lVar6,lVar11);
                  }
                  pcVar14 = *(code **)(pcVar30 + 8);
                  if (pcVar16 == (char *)0x0) {
                    pcVar16 = "<program name unknown>";
                  }
                  local_b8 = pcVar19;
                  local_a8 = pcVar28;
                  local_90 = pcVar30;
                  *(undefined8 *)((long)ppcVar26 + -8) = 0x77f828;
                  _dl_error_printf("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar16);
                  pcVar30 = local_90;
                  pcVar28 = local_a8;
                  pcVar19 = local_b8;
                }
                pcVar12 = local_98 + (long)local_a0;
                local_b8 = pcVar19;
                local_a8 = pcVar28;
                local_90 = pcVar30;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f862;
                (*pcVar12)();
                pcVar30 = local_90;
                pcVar28 = local_a8;
                pcVar19 = local_b8;
                if (local_80 == (code *)0x0) goto LAB_0077e36c;
              }
              pcVar14 = *(code **)(pcVar30 + 0x458);
              if (pcVar14 + 1 < &_nl_current_LC_PAPER_used) {
                local_a0 = pcVar19;
                local_98 = pcVar28;
                local_90 = pcVar30;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77f740;
                _dl_allocate_static_tls(pcVar30);
                pcVar14 = *(code **)(local_90 + 0x458);
                pcVar28 = local_98;
                pcVar19 = local_a0;
              }
              *(long *)((code *)pcVar32 + 8) =
                   (*(long *)(local_80 + 8) - (long)pcVar14) + *(long *)(pcVar22 + 0x10);
              *(code **)pcVar32 = _dl_tlsdesc_return;
            }
            else {
              if ((local_90 == *(code **)(param_1 + 0x410)) && (*(uint *)(param_1 + 0x418) == 1)) {
                local_80 = *(code **)(param_1 + 0x428);
                pcVar30 = *(code **)(param_1 + 0x420);
              }
              else {
                *(uint *)(param_1 + 0x418) = 1;
                *(code **)(param_1 + 0x410) = local_90;
                if ((lVar9 != 0) && (*(int *)(lVar9 + 8) == 0)) {
                  lVar9 = 0;
                }
                lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                uVar29 = *(uint *)local_90;
                local_a0 = pcVar19;
                *(undefined8 *)((long)ppcVar26 + -8) = 0;
                *(undefined8 *)((long)ppcVar26 + -0x10) = 9;
                uVar7 = local_b0;
                local_98 = pcVar28;
                *(undefined8 *)((long)ppcVar26 + -0x18) = 0x77e335;
                pcVar30 = (code *)_dl_lookup_symbol_x(lVar11 + lVar6 + (ulong)uVar29,param_1,
                                                      &local_80,uVar7,lVar9,1);
                *(code **)(param_1 + 0x420) = pcVar30;
                *(code **)(param_1 + 0x428) = local_80;
                pcVar14 = *(code **)((long)ppcVar26 + -8);
                pcVar28 = local_98;
                pcVar19 = local_a0;
              }
              if (local_80 != (code *)0x0) {
                cVar4 = local_80[4];
                goto LAB_0077ebd6;
              }
LAB_0077e36c:
              *(long *)((code *)pcVar32 + 8) = *(long *)(pcVar22 + 0x10);
              *(code **)pcVar32 = _dl_tlsdesc_undefweak;
            }
          }
          pcVar22 = pcVar22 + 0x18;
        } while (pcVar22 < pcVar28);
LAB_0077e0ac:
        if ((pcVar21 != (code *)0x0) && (pcVar21 <= pcVar19)) {
          if (local_cc == 0) {
            do {
              if (*(uint *)(pcVar21 + 8) == 0x25) {
                lVar6 = *(long *)pcVar21;
                lVar11 = *(long *)(pcVar21 + 0x10);
                lVar9 = *(long *)param_1;
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77e0eb;
                uVar7 = (*(code *)(lVar11 + lVar9))();
                *(undefined8 *)(pcVar18 + lVar6) = uVar7;
              }
              pcVar21 = pcVar21 + 0x18;
            } while (pcVar21 <= pcVar19);
          }
          else {
            do {
              while (*(uint *)(pcVar21 + 8) != 0x25) {
                pcVar21 = pcVar21 + 0x18;
                if (pcVar19 < pcVar21) goto LAB_0077e0fa;
              }
              pcVar22 = pcVar21 + 0x18;
              *(long *)(pcVar18 + *(long *)pcVar21) = *(long *)param_1 + *(long *)(pcVar21 + 0x10);
              pcVar21 = pcVar22;
            } while (pcVar22 <= pcVar19);
          }
        }
      }
    }
LAB_0077e0fa:
    local_c8 = local_c8 + 4;
    if (local_c8 == local_e0) {
      if ((local_d0 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
        uVar10 = *(ulong *)(*(long *)(param_1 + 0x50) + 8);
        lVar6 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
        local_90 = param_1;
        *(undefined8 *)((long)ppcVar26 + -8) = 0x77e164;
        pvVar8 = calloc(0x20,uVar10 / ((ulong)(lVar6 == 7) * 8 + 0x10));
        *(void **)(local_90 + 0x340) = pvVar8;
        param_1 = local_90;
        if (pvVar8 == (void *)0x0) {
          lVar6 = *(long *)(local_90 + 8);
          pcVar16 = *(char **)_dl_argv;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = "<program name unknown>";
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)ppcVar26 + -8) = 0x77fae4;
          _dl_fatal_printf("%s: out of memory to store relocation results for %s\n",pcVar16,lVar6);
        }
      }
      param_1[0x31c] = (code)((byte)param_1[0x31c] | 4);
      puVar33 = local_e8;
      while( true ) {
        if (puVar33 == (undefined8 *)0x0) {
          if (*(long *)(param_1 + 0x478) != 0) {
            __addr = (void *)(*(long *)(param_1 + 0x470) + *(long *)param_1 & -_dl_pagesize);
            pvVar8 = (void *)(*(long *)(param_1 + 0x478) +
                              *(long *)(param_1 + 0x470) + *(long *)param_1 & -_dl_pagesize);
            if (__addr != pvVar8) {
              local_90 = param_1;
              *(undefined8 *)((long)ppcVar26 + -8) = 0x77ee98;
              iVar5 = mprotect(__addr,(long)pvVar8 - (long)__addr,1);
              if (iVar5 < 0) {
                lVar6 = *(long *)(local_90 + 8);
                uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)ppcVar26 + -8) = 0x77eec3;
                _dl_signal_error(uVar3,lVar6,0,
                                 "cannot apply additional memory protection after relocation");
              }
            }
          }
          return;
        }
        iVar5 = *(int *)(puVar33 + 2);
        sVar27 = puVar33[1];
        pvVar8 = (void *)*puVar33;
        *(undefined8 *)((long)ppcVar26 + -8) = 0x77f6ed;
        iVar5 = mprotect(pvVar8,sVar27,iVar5);
        if (iVar5 < 0) break;
        puVar33 = (undefined8 *)puVar33[3];
      }
      pcVar16 = "cannot restore segment prot after reloc";
LAB_0077faae:
      lVar6 = *(long *)(param_1 + 8);
      uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)ppcVar26 + -8) = 0x77fac3;
      _dl_signal_error(uVar3,lVar6,0,pcVar16);
    }
    pcVar18 = *(code **)param_1;
  } while( true );
}

