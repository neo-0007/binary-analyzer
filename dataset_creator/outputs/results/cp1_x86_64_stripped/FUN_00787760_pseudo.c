
/* WARNING: Removing unreachable block (ram,0x00788f18) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00787760(code *param_1,undefined8 param_2,uint param_3,int param_4)

{
  ulong uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  short sVar12;
  code *pcVar13;
  long *plVar14;
  char *pcVar15;
  uint uVar16;
  code *pcVar17;
  code *extraout_RDX;
  code *pcVar18;
  ulong *puVar19;
  code *pcVar20;
  code *pcVar21;
  ulong *puVar22;
  undefined1 *puVar23;
  code **ppcVar24;
  code **ppcVar25;
  ulong uVar26;
  long lVar27;
  code *pcVar28;
  uint uVar29;
  code *pcVar30;
  char *pcVar31;
  long *plVar32;
  long in_FS_OFFSET;
  code *local_f8;
  code *local_f0;
  long *local_e8;
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
    if ((DAT_0094b0e4 & 0x20) != 0) {
      uVar29 = 0;
      pcVar15 = "";
LAB_00788e6b:
      pcVar31 = *(char **)(param_1 + 8);
      if ((*pcVar31 == '\0') && (pcVar31 = *(char **)PTR_PTR_0093adf8, pcVar31 == (char *)0x0)) {
        pcVar31 = "<main program>";
      }
      local_90 = param_1;
      FUN_00787060("\nrelocation processing: %s%s\n",pcVar31,pcVar15);
      param_1 = local_90;
      goto LAB_007877b8;
    }
    uVar29 = 0;
    local_e8 = *(long **)(param_1 + 0xf0);
    ppcVar25 = &local_f8;
    uVar16 = 0;
    if (*(long **)(param_1 + 0xf0) == (long *)0x0) goto LAB_00787848;
    uVar10 = (ulong)*(ushort *)(param_1 + 0x2b8);
    puVar19 = *(ulong **)(param_1 + 0x2a8);
    if (puVar19 + uVar10 * 7 <= puVar19) {
      local_e8 = (long *)0x0;
      ppcVar25 = &local_f8;
      uVar16 = uVar29;
      goto LAB_00787848;
    }
LAB_00788ec0:
    local_98 = (code *)CONCAT44(local_98._4_4_,param_3);
    local_90 = (code *)CONCAT44(local_90._4_4_,uVar29);
    puVar22 = puVar19;
    ppcVar24 = &local_f8;
    plVar32 = (long *)0x0;
    do {
      puVar23 = (undefined1 *)ppcVar24;
      plVar14 = plVar32;
      if ((*puVar22 & 0x2ffffffff) == 1) {
        puVar23 = (undefined1 *)((long)ppcVar24 + -0x30);
        ppcVar25 = (code **)((long)ppcVar24 + -0x30);
        *(undefined8 *)((long)ppcVar24 + -8) = *(undefined8 *)((long)ppcVar24 + -8);
        uVar10 = puVar22[2] & -DAT_0093eb18;
        uVar29 = *(uint *)((long)puVar22 + 4);
        lVar7 = ((puVar22[2] - 1) + DAT_0093eb18 + puVar22[5] & -DAT_0093eb18) - uVar10;
        lVar27 = uVar10 + *(long *)param_1;
        plVar14 = (long *)((ulong)((long)ppcVar24 + -0x21) & 0xfffffffffffffff0);
        plVar14[1] = lVar7;
        *plVar14 = lVar27;
        uVar16 = uVar29 >> 2 & 1;
        if ((uVar29 & 2) != 0) {
          uVar16 = uVar16 | 2;
        }
        *(uint *)(plVar14 + 2) = uVar16;
        if ((uVar29 & 1) != 0) {
          uVar16 = uVar16 | 4;
          *(uint *)(plVar14 + 2) = uVar16;
        }
        *(undefined8 *)((long)ppcVar24 + -0x38) = 0x788f9d;
        iVar6 = FUN_0076f0b0(lVar27,lVar7,uVar16 | 2);
        if (iVar6 < 0) {
          pcVar15 = "cannot make segment writable for relocation";
          goto LAB_007893de;
        }
        plVar14[3] = (long)plVar32;
        puVar19 = *(ulong **)(param_1 + 0x2a8);
        uVar10 = (ulong)*(ushort *)(param_1 + 0x2b8);
      }
      puVar22 = puVar22 + 7;
      ppcVar24 = (code **)puVar23;
      plVar32 = plVar14;
    } while (puVar22 < puVar19 + uVar10 * 7);
    ppcVar25 = (code **)puVar23;
    uVar29 = (uint)local_90;
    param_3 = (uint)local_98;
    local_e8 = plVar14;
  }
  else {
    uVar29 = param_3 & 1;
    if ((DAT_0094b0e4 & 0x20) != 0) {
      pcVar15 = " (lazy)";
      if (uVar29 == 0) {
        pcVar15 = "";
      }
      goto LAB_00788e6b;
    }
LAB_007877b8:
    local_e8 = *(long **)(param_1 + 0xf0);
    ppcVar25 = &local_f8;
    if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
      uVar10 = (ulong)*(ushort *)(param_1 + 0x2b8);
      puVar19 = *(ulong **)(param_1 + 0x2a8);
      if (puVar19 < puVar19 + uVar10 * 7) goto LAB_00788ec0;
      local_e8 = (long *)0x0;
      ppcVar25 = &local_f8;
    }
  }
  uVar16 = uVar29;
  if ((*(long *)(param_1 + 0xf8) != 0) && (uVar29 != 0)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    if (((byte)param_1[0x31e] & 0x20) != 0) {
      lVar7 = lVar7 + *(long *)param_1;
    }
    if (*(long *)(lVar7 + 8) != 0) {
      *(long *)(param_1 + 0x3f8) = *(long *)(lVar7 + 8) + *(long *)param_1;
      *(long *)(param_1 + 0x400) = lVar7 + 0x18;
    }
    *(code **)(lVar7 + 8) = param_1;
    lVar27 = DAT_0094b0d0;
    if (local_d0 == 0) {
      if (DAT_0094b000 == 0) {
        *(code **)(lVar7 + 0x10) = FUN_0078b430;
        uVar16 = 1;
      }
      else {
        pcVar17 = FUN_0078b4b0;
        if (((byte)DAT_0094af44 & 2) != 0) {
          pcVar17 = FUN_0078b580;
        }
        *(code **)(lVar7 + 0x10) = pcVar17;
        uVar16 = 1;
      }
    }
    else {
      pcVar17 = FUN_0078aa80;
      if (((DAT_0094af08._2_1_ & 1) == 0) &&
         (pcVar17 = FUN_0078b2a0, (DAT_0094aeec._3_1_ & 0x10) != 0)) {
        pcVar17 = FUN_0078ae90;
      }
      *(code **)(lVar7 + 0x10) = pcVar17;
      uVar16 = 1;
      if (lVar27 != 0) {
        local_90 = param_1;
        *(undefined8 *)((long)ppcVar25 + -8) = 0x7892e0;
        iVar6 = FUN_007b93e0();
        param_1 = local_90;
        if (iVar6 != 0) {
          DAT_0094b0b8 = local_90;
        }
      }
    }
  }
LAB_00787848:
  pcVar21 = (code *)0x0;
  lVar7 = 0;
  pcVar17 = *(code **)param_1;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 0x78) == 0) {
    pcVar13 = (code *)0x0;
  }
  else {
    pcVar21 = *(code **)(*(long *)(param_1 + 0x78) + 8);
    if (((byte)param_1[0x31e] & 0x20) != 0) {
      pcVar21 = pcVar21 + (long)pcVar17;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x80) + 8);
    pcVar13 = pcVar21 + lVar7;
    local_78._8_8_ = lVar7;
    local_78._0_8_ = pcVar21;
    if (*(long *)(param_1 + 0x188) != 0) {
      local_68._8_8_ = 0;
      local_68._0_8_ = *(ulong *)(*(long *)(param_1 + 0x188) + 8);
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    pcVar20 = *(code **)(*(long *)(param_1 + 0xf8) + 8);
    if (((byte)param_1[0x31e] & 0x20) != 0) {
      pcVar20 = *(code **)(*(long *)(param_1 + 0xf8) + 8) + (long)pcVar17;
    }
    lVar27 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    if (pcVar20 + lVar27 == pcVar13) {
      lVar7 = lVar7 - lVar27;
      local_78._8_8_ = lVar7;
      pcVar13 = pcVar21 + lVar7;
    }
    if ((uVar16 == 0) && (pcVar20 == pcVar13)) {
      local_78._8_8_ = lVar27 + lVar7;
    }
    else {
      local_48 = ZEXT416(uVar16) << 0x40;
      local_58._8_8_ = lVar27;
      local_58._0_8_ = pcVar20;
    }
  }
  local_c8 = (undefined8 *)local_78;
  local_cc = param_3 & 0x2000000;
  local_e0 = &local_38;
  do {
    pcVar21 = (code *)*local_c8;
    pcVar13 = pcVar21 + local_c8[1];
    local_98 = pcVar13;
    if (*(int *)(local_c8 + 3) == 0) {
      pcVar20 = pcVar21 + local_c8[2] * 0x18;
      local_90 = *(code **)(*(long *)(param_1 + 0x70) + 8) + (long)pcVar17;
      if (((byte)param_1[0x31e] & 0x20) == 0) {
        local_90 = *(code **)(*(long *)(param_1 + 0x70) + 8);
      }
      if (param_1 == (code *)0x0) {
LAB_00787d46:
        lVar7 = *(long *)(param_1 + 0x1d0);
      }
      else {
        if ((pcVar17 != (code *)0x0) || (*(long *)(param_1 + 0x240) == 0)) {
          for (; pcVar21 < pcVar20; pcVar21 = pcVar21 + 0x18) {
            if ((*(uint *)(pcVar21 + 8) != 0x26) && (*(uint *)(pcVar21 + 8) != 8)) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)ppcVar25 + -8) = 0x7893bb;
              FUN_006e2220("ELFW(R_TYPE) (reloc->r_info) == R_X86_64_RELATIVE",
                           "../sysdeps/x86_64/dl-machine.h",0x216,"elf_machine_rela_relative");
            }
            *(code **)(pcVar17 + *(long *)pcVar21) = pcVar17 + *(long *)(pcVar21 + 0x10);
          }
          goto LAB_00787d46;
        }
        lVar7 = *(long *)(param_1 + 0x1d0);
      }
      if (lVar7 == 0) {
        local_c0 = (code *)0x0;
        if (pcVar20 < pcVar13) {
          local_b8 = (code *)0x0;
          local_a0 = pcVar17;
          do {
            uVar10 = *(ulong *)(pcVar20 + 8);
            pcVar21 = local_a0 + *(long *)pcVar20;
            uVar26 = uVar10 & 0xffffffff;
            pcVar17 = local_90 + (uVar10 >> 0x20) * 0x18;
            if ((int)uVar10 == 0x25) {
              local_c0 = pcVar20;
              if (local_b8 == (code *)0x0) {
                local_b8 = pcVar20;
              }
              goto LAB_00788870;
            }
            local_80 = pcVar17;
            if ((uVar26 == 8) || (uVar26 == 0x26)) {
              *(long *)pcVar21 = *(long *)(pcVar20 + 0x10) + *(long *)param_1;
              goto LAB_00788870;
            }
            if (uVar26 == 0) goto LAB_00788870;
            cVar5 = pcVar17[4];
            if (((byte)cVar5 >> 4 == 0) || (((byte)pcVar17[5] & 3) - 1 < 2)) {
              sVar12 = *(short *)(pcVar17 + 6);
              pcVar13 = param_1;
              if (sVar12 == -0xf) goto LAB_00788ce2;
LAB_00788ba4:
              lVar7 = *(long *)pcVar13;
LAB_00788ba7:
              pcVar28 = (code *)(lVar7 + *(long *)(local_80 + 8));
              if (((((byte)cVar5 & 0xf) == 10) && (sVar12 != 0)) && (local_cc == 0)) {
                if ((param_1 != pcVar13) && (((byte)pcVar13[0x31c] & 4) == 0)) {
                  lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                  if (((byte)param_1[0x31e] & 0x20) != 0) {
                    lVar7 = lVar7 + *(long *)param_1;
                  }
                  lVar7 = lVar7 + (ulong)*(uint *)pcVar17;
                  uVar8 = *(undefined8 *)(param_1 + 8);
                  pcVar15 = *(char **)PTR_PTR_0093adf8;
                  if (((byte)pcVar13[0x31c] & 3) == 0) goto LAB_007893bb;
                  uVar4 = *(undefined8 *)(pcVar13 + 8);
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = "<program name unknown>";
                  }
                  local_f0 = pcVar28;
                  local_d8 = pcVar21;
                  local_a8 = pcVar13;
                  *(undefined8 *)((long)ppcVar25 + -8) = 0x788c51;
                  FUN_00787310("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar15,uVar8,
                               uVar4);
                  pcVar28 = local_f0;
                  pcVar21 = local_d8;
                  pcVar13 = local_a8;
                }
                local_d8 = pcVar21;
                local_a8 = pcVar13;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788c77;
                pcVar28 = (code *)(*pcVar28)();
                pcVar21 = local_d8;
                pcVar13 = local_a8;
              }
            }
            else {
              uVar1 = uVar26 - 7;
              uVar29 = (uint)(uVar26 == 5) * 2 | (uint)(uVar26 == 6) << 2;
              if (pcVar17 == *(code **)(param_1 + 0x410)) {
                if (uVar1 < 0x1e) {
                  if ((*(uint *)(&DAT_0082f920 + uVar1 * 4) | uVar29) != *(uint *)(param_1 + 0x418))
                  goto LAB_007886bb;
                }
                else if (*(uint *)(param_1 + 0x418) != uVar29) goto LAB_007886c6;
                local_80 = *(code **)(param_1 + 0x428);
                pcVar13 = *(code **)(param_1 + 0x420);
              }
              else {
                if (uVar1 < 0x1e) {
LAB_007886bb:
                  uVar29 = uVar29 | *(uint *)(&DAT_0082f920 + uVar1 * 4);
                }
LAB_007886c6:
                uVar16 = *(uint *)pcVar17;
                *(uint *)(param_1 + 0x418) = uVar29;
                *(code **)(param_1 + 0x410) = pcVar17;
                lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                lVar27 = 0;
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar27 = *(long *)param_1;
                }
                *(undefined8 *)((long)ppcVar25 + -8) = 0;
                uVar8 = local_b0;
                *(undefined8 *)((long)ppcVar25 + -0x10) = 9;
                local_a8 = pcVar21;
                *(undefined8 *)((long)ppcVar25 + -0x18) = 0x78871a;
                pcVar13 = (code *)FUN_007b82e0((ulong)uVar16 + lVar7 + lVar27,param_1,&local_80,
                                               uVar8,0);
                *(code **)(param_1 + 0x420) = pcVar13;
                *(code **)(param_1 + 0x428) = local_80;
                pcVar21 = local_a8;
              }
              pcVar28 = (code *)0x0;
              if (local_80 != (code *)0x0) {
                sVar12 = *(short *)(local_80 + 6);
                cVar5 = local_80[4];
                if (sVar12 != -0xf) goto LAB_00788ba4;
LAB_00788ce2:
                lVar7 = 0;
                goto LAB_00788ba7;
              }
            }
            pcVar18 = local_80;
            switch(uVar26) {
            default:
              goto switchD_00787f27_caseD_788390;
            case 2:
              lVar7 = *(long *)(pcVar20 + 0x10);
              uVar29 = (uint)(pcVar28 + (lVar7 - (long)pcVar21));
              *(uint *)pcVar21 = uVar29;
              if (pcVar28 + (lVar7 - (long)pcVar21) == (code *)(long)(int)uVar29) break;
              pcVar15 = "%s: Symbol `%s\' causes overflow in R_X86_64_PC32 relocation\n";
              goto LAB_007889f2;
            case 5:
              if (local_80 != (code *)0x0) {
                uVar10 = *(ulong *)(local_80 + 0x10);
                if (*(ulong *)(pcVar17 + 0x10) <= *(ulong *)(local_80 + 0x10)) {
                  uVar10 = *(ulong *)(pcVar17 + 0x10);
                }
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788a87;
                thunk_FUN_00713a50(pcVar21,pcVar28,uVar10);
                if ((*(ulong *)(pcVar17 + 0x10) < *(ulong *)(pcVar18 + 0x10)) ||
                   ((*(ulong *)(pcVar18 + 0x10) < *(ulong *)(pcVar17 + 0x10) && (DAT_0094b0d8 != 0))
                   )) {
                  pcVar15 = 
                  "%s: Symbol `%s\' has different size in shared object, consider re-linking\n";
                  goto LAB_007889f2;
                }
              }
              break;
            case 0x10:
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)pcVar21 = *(undefined8 *)(pcVar13 + 0x460);
              }
              break;
            case 0x11:
              if (local_80 != (code *)0x0) {
                *(long *)pcVar21 = *(long *)(pcVar20 + 0x10) + *(long *)(local_80 + 8);
              }
              break;
            case 0x12:
              if (local_80 != (code *)0x0) {
                lVar7 = *(long *)(pcVar13 + 0x458);
                if (lVar7 + 1U < 2) {
                  local_d8 = pcVar21;
                  local_a8 = pcVar13;
                  *(undefined8 *)((long)ppcVar25 + -8) = 0x789311;
                  FUN_00787560(pcVar13);
                  lVar7 = *(long *)(local_a8 + 0x458);
                  pcVar21 = local_d8;
                }
                *(long *)pcVar21 = (*(long *)(local_80 + 8) - lVar7) + *(long *)(pcVar20 + 0x10);
              }
              break;
            case 0x20:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 10:
              lVar7 = *(long *)(pcVar20 + 0x10);
              pcVar15 = "%s: Symbol `%s\' causes overflow in R_X86_64_32 relocation\n";
              *(uint *)pcVar21 = (uint)(pcVar28 + lVar7);
              if ((ulong)(pcVar28 + lVar7) >> 0x20 != 0) {
LAB_007889f2:
                lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar7 = lVar7 + *(long *)param_1;
                }
                uVar29 = *(uint *)pcVar17;
                pcVar31 = *(char **)PTR_PTR_0093adf8;
                if (pcVar31 == (char *)0x0) {
                  pcVar31 = "<program name unknown>";
                }
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788a2f;
                FUN_00787310(pcVar15,pcVar31,(ulong)uVar29 + lVar7);
              }
              break;
            case 0x21:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 1:
            case 6:
            case 7:
              *(code **)pcVar21 = pcVar28 + *(long *)(pcVar20 + 0x10);
              break;
            case 0x24:
              if (local_80 == (code *)0x0) {
                *(undefined8 *)(pcVar21 + 8) = *(undefined8 *)(pcVar20 + 0x10);
                *(undefined8 *)pcVar21 = 0x78d2c0;
              }
              else {
                lVar7 = *(long *)(pcVar13 + 0x458);
                if (lVar7 + 1U < 2) {
                  local_d8 = pcVar21;
                  local_a8 = pcVar13;
                  *(undefined8 *)((long)ppcVar25 + -8) = 0x789345;
                  FUN_00787560(pcVar13);
                  lVar7 = *(long *)(local_a8 + 0x458);
                  pcVar21 = local_d8;
                }
                *(long *)(pcVar21 + 8) =
                     (*(long *)(local_80 + 8) - lVar7) + *(long *)(pcVar20 + 0x10);
                *(code **)pcVar21 = FUN_0078d2b0;
              }
              break;
            case 0x25:
              pcVar17 = (code *)(*(long *)(pcVar20 + 0x10) + *(long *)param_1);
              if (local_cc == 0) {
                local_a8 = pcVar21;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788a51;
                pcVar17 = (code *)(*pcVar17)();
                pcVar21 = local_a8;
              }
              *(code **)pcVar21 = pcVar17;
            }
LAB_00788870:
            pcVar20 = pcVar20 + 0x18;
          } while (pcVar20 < local_98);
          if ((local_b8 != (code *)0x0) && (local_b8 <= local_c0)) {
            local_98 = local_a0;
            pcVar31 = "%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n";
            pcVar20 = local_b8;
            pcVar21 = local_c0;
            goto LAB_007888cd;
          }
        }
      }
      else {
        local_a0 = *(code **)(lVar7 + 8);
        if (((byte)param_1[0x31e] & 0x20) != 0) {
          local_a0 = local_a0 + *(long *)param_1;
        }
        if (pcVar20 < pcVar13) {
          local_d8 = (code *)0x0;
          local_c0 = (code *)0x0;
          local_a8 = pcVar17;
          do {
            uVar10 = *(ulong *)(pcVar20 + 8);
            pcVar21 = local_a8 + *(long *)pcVar20;
            uVar26 = uVar10 & 0xffffffff;
            uVar2 = *(ushort *)(local_a0 + (uVar10 >> 0x20) * 2);
            pcVar17 = local_90 + (uVar10 >> 0x20) * 0x18;
            if ((int)uVar10 == 0x25) {
LAB_007883a0:
              local_d8 = pcVar20;
              if (local_c0 == (code *)0x0) {
                local_c0 = pcVar20;
              }
              goto LAB_00787f40;
            }
            local_80 = pcVar17;
            if ((uVar26 == 8) || (uVar26 == 0x26)) {
              *(long *)pcVar21 = *(long *)(pcVar20 + 0x10) + *(long *)param_1;
              goto LAB_00787f40;
            }
            if (uVar26 == 0) goto LAB_00787f40;
            cVar5 = pcVar17[4];
            if (((byte)cVar5 >> 4 == 0) || (((byte)pcVar17[5] & 3) - 1 < 2)) {
              sVar12 = *(short *)(pcVar17 + 6);
              pcVar13 = param_1;
              if (sVar12 == -0xf) goto LAB_007883f2;
LAB_0078829c:
              lVar7 = *(long *)pcVar13;
LAB_0078829f:
              pcVar28 = (code *)(lVar7 + *(long *)(local_80 + 8));
              if (((((byte)cVar5 & 0xf) != 10) || (local_cc != 0)) || (sVar12 == 0))
              goto LAB_00787f0f;
              if ((param_1 != pcVar13) && (((byte)pcVar13[0x31c] & 4) == 0)) {
                lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar7 = lVar7 + *(long *)param_1;
                }
                lVar7 = lVar7 + (ulong)*(uint *)pcVar17;
                uVar8 = *(undefined8 *)(param_1 + 8);
                pcVar15 = *(char **)PTR_PTR_0093adf8;
                if (((byte)pcVar13[0x31c] & 3) == 0) goto LAB_007893bb;
                uVar4 = *(undefined8 *)(pcVar13 + 8);
                if (pcVar15 == (char *)0x0) {
                  pcVar15 = "<program name unknown>";
                }
                local_f8 = pcVar28;
                local_f0 = pcVar21;
                local_b8 = pcVar13;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788349;
                FUN_00787310("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar15,uVar8,
                             uVar4);
                pcVar28 = local_f8;
                pcVar21 = local_f0;
                pcVar13 = local_b8;
              }
              local_f0 = pcVar13;
              local_b8 = pcVar21;
              *(undefined8 *)((long)ppcVar25 + -8) = 0x78836f;
              pcVar28 = (code *)(*pcVar28)();
              pcVar21 = local_b8;
              pcVar13 = local_f0;
              if (uVar26 < 0x26) goto LAB_00787f19;
switchD_00787f27_caseD_788390:
              *(undefined8 *)((long)ppcVar25 + -8) = 0x78839d;
              FUN_00787690(param_1,uVar10 & 0xffffffff,0);
              goto LAB_007883a0;
            }
            uVar29 = (uint)(uVar26 == 6) << 2 | (uint)(uVar26 == 5) * 2;
            uVar1 = uVar26 - 7;
            if (pcVar17 == *(code **)(param_1 + 0x410)) {
              if (uVar1 < 0x1e) {
                if ((*(uint *)(&DAT_0082f920 + uVar1 * 4) | uVar29) != *(uint *)(param_1 + 0x418))
                goto LAB_00787e5f;
              }
              else if (*(uint *)(param_1 + 0x418) != uVar29) goto LAB_00787e6a;
              local_80 = *(code **)(param_1 + 0x428);
              pcVar13 = *(code **)(param_1 + 0x420);
            }
            else {
              if (uVar1 < 0x1e) {
LAB_00787e5f:
                uVar29 = uVar29 | *(uint *)(&DAT_0082f920 + uVar1 * 4);
              }
LAB_00787e6a:
              *(uint *)(param_1 + 0x418) = uVar29;
              *(code **)(param_1 + 0x410) = pcVar17;
              lVar7 = *(long *)(param_1 + 0x2e8) + (ulong)(uVar2 & 0x7fff) * 0x18;
              if ((lVar7 != 0) && (*(int *)(lVar7 + 8) == 0)) {
                lVar7 = 0;
              }
              uVar29 = *(uint *)pcVar17;
              lVar27 = *(long *)(*(long *)(param_1 + 0x68) + 8);
              lVar9 = 0;
              if (((byte)param_1[0x31e] & 0x20) != 0) {
                lVar9 = *(long *)param_1;
              }
              *(undefined8 *)((long)ppcVar25 + -8) = 0;
              uVar8 = local_b0;
              *(undefined8 *)((long)ppcVar25 + -0x10) = 9;
              local_b8 = pcVar21;
              *(undefined8 *)((long)ppcVar25 + -0x18) = 0x787edb;
              pcVar13 = (code *)FUN_007b82e0((ulong)uVar29 + lVar27 + lVar9,param_1,&local_80,uVar8,
                                             lVar7);
              *(code **)(param_1 + 0x420) = pcVar13;
              *(code **)(param_1 + 0x428) = local_80;
              pcVar21 = local_b8;
            }
            pcVar28 = (code *)0x0;
            if (local_80 != (code *)0x0) {
              sVar12 = *(short *)(local_80 + 6);
              cVar5 = local_80[4];
              if (sVar12 != -0xf) goto LAB_0078829c;
LAB_007883f2:
              lVar7 = 0;
              goto LAB_0078829f;
            }
LAB_00787f0f:
            if (0x25 < uVar26) goto switchD_00787f27_caseD_788390;
LAB_00787f19:
            pcVar18 = local_80;
            switch((long)&switchD_00787f27::switchdataD_0082f7e0 +
                   (long)(int)(&switchD_00787f27::switchdataD_0082f7e0)[uVar26]) {
            case 0x787f2a:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 0x787f32:
              *(code **)pcVar21 = pcVar28 + *(long *)(pcVar20 + 0x10);
              break;
            case 0x7880d3:
              pcVar28 = *(code **)(local_80 + 0x10);
            case 0x7880db:
              lVar7 = *(long *)(pcVar20 + 0x10);
              pcVar15 = "%s: Symbol `%s\' causes overflow in R_X86_64_32 relocation\n";
              *(uint *)pcVar21 = (uint)(pcVar28 + lVar7);
              if ((ulong)(pcVar28 + lVar7) >> 0x20 != 0) {
LAB_007880f3:
                lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar7 = lVar7 + *(long *)param_1;
                }
                uVar29 = *(uint *)pcVar17;
                pcVar31 = *(char **)PTR_PTR_0093adf8;
                if (pcVar31 == (char *)0x0) {
                  pcVar31 = "<program name unknown>";
                }
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788130;
                FUN_00787310(pcVar15,pcVar31,(ulong)uVar29 + lVar7);
              }
              break;
            case 0x788135:
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)pcVar21 = *(undefined8 *)(pcVar13 + 0x460);
              }
              break;
            case 0x78814d:
              if (local_80 != (code *)0x0) {
                lVar7 = *(long *)(pcVar13 + 0x458);
                if (lVar7 + 1U < 2) {
                  local_f0 = pcVar21;
                  local_b8 = pcVar13;
                  *(undefined8 *)((long)ppcVar25 + -8) = 0x789215;
                  FUN_00787560(pcVar13);
                  lVar7 = *(long *)(local_b8 + 0x458);
                  pcVar21 = local_f0;
                }
                *(long *)pcVar21 = (*(long *)(local_80 + 8) - lVar7) + *(long *)(pcVar20 + 0x10);
              }
              break;
            case 0x788182:
              if (local_80 != (code *)0x0) {
                *(long *)pcVar21 = *(long *)(pcVar20 + 0x10) + *(long *)(local_80 + 8);
              }
              break;
            case 0x78819f:
              if (local_80 == (code *)0x0) {
                *(undefined8 *)(pcVar21 + 8) = *(undefined8 *)(pcVar20 + 0x10);
                *(undefined8 *)pcVar21 = 0x78d2c0;
              }
              else {
                lVar7 = *(long *)(pcVar13 + 0x458);
                if (lVar7 + 1U < 2) {
                  local_f0 = pcVar21;
                  local_b8 = pcVar13;
                  *(undefined8 *)((long)ppcVar25 + -8) = 0x7891e1;
                  FUN_00787560(pcVar13);
                  lVar7 = *(long *)(local_b8 + 0x458);
                  pcVar21 = local_f0;
                }
                *(long *)(pcVar21 + 8) =
                     (*(long *)(local_80 + 8) - lVar7) + *(long *)(pcVar20 + 0x10);
                *(code **)pcVar21 = FUN_0078d2b0;
              }
              break;
            case 0x7881df:
              pcVar17 = (code *)(*(long *)(pcVar20 + 0x10) + *(long *)param_1);
              if (local_cc == 0) {
                local_b8 = pcVar21;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x7881fa;
                pcVar17 = (code *)(*pcVar17)();
                pcVar21 = local_b8;
              }
              *(code **)pcVar21 = pcVar17;
              break;
            case 0x788209:
              if (local_80 != (code *)0x0) {
                uVar10 = *(ulong *)(pcVar17 + 0x10);
                if (*(ulong *)(local_80 + 0x10) < *(ulong *)(pcVar17 + 0x10)) {
                  uVar10 = *(ulong *)(local_80 + 0x10);
                }
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788230;
                thunk_FUN_00713a50(pcVar21,pcVar28,uVar10);
                if ((*(ulong *)(pcVar17 + 0x10) < *(ulong *)(pcVar18 + 0x10)) ||
                   ((*(ulong *)(pcVar18 + 0x10) < *(ulong *)(pcVar17 + 0x10) && (DAT_0094b0d8 != 0))
                   )) {
                  pcVar15 = 
                  "%s: Symbol `%s\' has different size in shared object, consider re-linking\n";
                  goto LAB_007880f3;
                }
              }
              break;
            case 0x788260:
              lVar7 = *(long *)(pcVar20 + 0x10);
              uVar29 = (uint)(pcVar28 + (lVar7 - (long)pcVar21));
              *(uint *)pcVar21 = uVar29;
              if (pcVar28 + (lVar7 - (long)pcVar21) == (code *)(long)(int)uVar29) break;
              pcVar15 = "%s: Symbol `%s\' causes overflow in R_X86_64_PC32 relocation\n";
              goto LAB_007880f3;
            case 0x788390:
              goto switchD_00787f27_caseD_788390;
            }
LAB_00787f40:
            pcVar17 = local_d8;
            pcVar20 = pcVar20 + 0x18;
          } while (pcVar20 < local_98);
          pcVar21 = local_c0;
          if (local_c0 != (code *)0x0) {
            for (; pcVar21 <= pcVar17; pcVar21 = pcVar21 + 0x18) {
              if ((int)*(ulong *)(pcVar21 + 8) == 0x25) {
                uVar10 = *(ulong *)(pcVar21 + 8) >> 0x20;
                local_98 = local_a8 + *(long *)pcVar21;
                uVar2 = *(ushort *)(local_a0 + uVar10 * 2);
                pcVar13 = local_90 + uVar10 * 0x18;
                cVar5 = pcVar13[4];
                pcVar20 = param_1;
                local_80 = pcVar13;
                if (((byte)cVar5 >> 4 == 0) || (((byte)pcVar13[5] & 3) - 1 < 2)) {
LAB_00788406:
                  pcVar28 = *(code **)(local_80 + 8);
                  if (*(short *)(local_80 + 6) == -0xf) {
                    if (((byte)cVar5 & 0xf) == 10) goto LAB_00788432;
                    goto LAB_007880b0;
                  }
                  if ((((byte)cVar5 & 0xf) != 10) || (*(short *)(local_80 + 6) == 0))
                  goto LAB_007880b0;
                  pcVar28 = pcVar28 + *(long *)pcVar20;
LAB_00788432:
                  if (local_cc == 0) {
                    if ((param_1 != pcVar20) && (((byte)pcVar20[0x31c] & 4) == 0)) {
                      lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                      if (((byte)param_1[0x31e] & 0x20) != 0) {
                        lVar7 = lVar7 + *(long *)param_1;
                      }
                      lVar7 = lVar7 + (ulong)*(uint *)pcVar13;
                      uVar8 = *(undefined8 *)(param_1 + 8);
                      pcVar15 = *(char **)PTR_PTR_0093adf8;
                      if (((byte)pcVar20[0x31c] & 3) == 0) goto LAB_007893bb;
                      uVar4 = *(undefined8 *)(pcVar20 + 8);
                      if (pcVar15 == (char *)0x0) {
                        pcVar15 = "<program name unknown>";
                      }
                      local_b8 = pcVar28;
                      *(undefined8 *)((long)ppcVar25 + -8) = 0x7884a9;
                      FUN_00787310("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar15,
                                   uVar8,uVar4);
                      pcVar28 = local_b8;
                    }
                    *(undefined8 *)((long)ppcVar25 + -8) = 0x7884b3;
                    (*pcVar28)();
                    pcVar13 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
                    goto LAB_007880c2;
                  }
                  pcVar13 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
                }
                else {
                  if ((pcVar13 == *(code **)(param_1 + 0x410)) && (*(uint *)(param_1 + 0x418) == 0))
                  {
                    local_80 = *(code **)(param_1 + 0x428);
                    pcVar20 = *(code **)(param_1 + 0x420);
                  }
                  else {
                    *(code **)(param_1 + 0x410) = pcVar13;
                    *(uint *)(param_1 + 0x418) = 0;
                    lVar7 = *(long *)(param_1 + 0x2e8) + (ulong)(uVar2 & 0x7fff) * 0x18;
                    if ((lVar7 != 0) && (*(int *)(lVar7 + 8) == 0)) {
                      lVar7 = 0;
                    }
                    uVar29 = *(uint *)pcVar13;
                    lVar27 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                    lVar9 = 0;
                    if (((byte)param_1[0x31e] & 0x20) != 0) {
                      lVar9 = *(long *)param_1;
                    }
                    *(undefined8 *)((long)ppcVar25 + -8) = 0;
                    uVar8 = local_b0;
                    *(undefined8 *)((long)ppcVar25 + -0x10) = 9;
                    local_b8 = pcVar13;
                    *(undefined8 *)((long)ppcVar25 + -0x18) = 0x78807e;
                    pcVar20 = (code *)FUN_007b82e0((ulong)uVar29 + lVar27 + lVar9,param_1,&local_80,
                                                   uVar8,lVar7,0);
                    *(code **)(param_1 + 0x420) = pcVar20;
                    *(code **)(param_1 + 0x428) = local_80;
                    pcVar13 = local_b8;
                  }
                  if (local_80 != (code *)0x0) {
                    cVar5 = local_80[4];
                    goto LAB_00788406;
                  }
LAB_007880b0:
                  pcVar13 = (code *)(*(long *)(pcVar21 + 0x10) + *(long *)param_1);
                  if (local_cc == 0) {
LAB_007880c2:
                    *(undefined8 *)((long)ppcVar25 + -8) = 0x7880c4;
                    pcVar13 = (code *)(*pcVar13)();
                  }
                }
                *(code **)local_98 = pcVar13;
              }
            }
          }
        }
      }
    }
    else {
      pcVar18 = (code *)0x0;
      pcVar20 = (code *)0x0;
      pcVar28 = pcVar13;
      if (pcVar21 < pcVar13) {
        do {
          while( true ) {
            uVar10 = *(ulong *)(pcVar21 + 8);
            if ((int)uVar10 != 0x25) break;
            if (pcVar20 == (code *)0x0) {
              pcVar20 = pcVar21;
            }
            pcVar30 = pcVar21 + 0x18;
            pcVar18 = pcVar21;
            pcVar21 = pcVar30;
            if (pcVar28 <= pcVar30) goto LAB_007879dc;
          }
          pcVar31 = (char *)(pcVar17 + *(long *)pcVar21);
          if ((uVar10 & 0xffffffff) == 7) {
            if (*(long *)(param_1 + 0x3f8) == 0) {
              *(code **)pcVar31 = pcVar17 + *(long *)pcVar31;
            }
            else {
              *(long *)pcVar31 =
                   *(long *)(param_1 + 0x3f8) + ((long)pcVar31 - *(long *)(param_1 + 0x400)) * 2;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) != 0x24) {
              *(undefined8 *)((long)ppcVar25 + -8) = 0x788e24;
              FUN_00787690(param_1,uVar10,1);
              pcVar18 = extraout_RDX;
LAB_00788e24:
              cVar5 = pcVar18[4];
LAB_00788cf6:
              pcVar30 = *(code **)(pcVar18 + 8);
              if (*(short *)(pcVar18 + 6) == -0xf) {
                if (((byte)cVar5 & 0xf) != 10) goto LAB_007889b6;
              }
              else {
                if (((byte)cVar5 & 0xf) != 10) goto LAB_007889b6;
                if (*(short *)(pcVar18 + 6) == 0) goto LAB_007889b6;
                pcVar30 = pcVar30 + *(long *)pcVar13;
              }
              if (local_cc != 0) {
                pcVar13 = (code *)(*(long *)(pcVar20 + 0x10) + *(long *)param_1);
                goto LAB_007889ca;
              }
              if ((param_1 != pcVar13) && (((byte)pcVar13[0x31c] & 4) == 0)) {
                lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                if (((byte)param_1[0x31e] & 0x20) != 0) {
                  lVar7 = lVar7 + *(long *)param_1;
                }
                lVar7 = lVar7 + (ulong)*(uint *)pcVar28;
                uVar8 = *(undefined8 *)(param_1 + 8);
                pcVar15 = *(char **)PTR_PTR_0093adf8;
                if (((byte)pcVar13[0x31c] & 3) == 0) goto LAB_007893bb;
                uVar4 = *(undefined8 *)(pcVar13 + 8);
                if (pcVar15 == (char *)0x0) {
                  pcVar15 = "<program name unknown>";
                }
                local_a0 = pcVar30;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x788d9c;
                FUN_00787310(pcVar31,pcVar15,uVar8,uVar4);
                pcVar30 = local_a0;
              }
              *(undefined8 *)((long)ppcVar25 + -8) = 0x788da6;
              (*pcVar30)();
              pcVar13 = (code *)(*(long *)(pcVar20 + 0x10) + *(long *)param_1);
              do {
                *(undefined8 *)((long)ppcVar25 + -8) = 0x7889ca;
                pcVar13 = (code *)(*pcVar13)();
LAB_007889ca:
                do {
                  *(code **)pcVar17 = pcVar13;
                  do {
                    pcVar20 = pcVar20 + 0x18;
                    if (pcVar21 < pcVar20) goto LAB_00787a2a;
LAB_007888cd:
                  } while ((int)*(ulong *)(pcVar20 + 8) != 0x25);
                  pcVar17 = local_98 + *(long *)pcVar20;
                  pcVar18 = local_90 + (*(ulong *)(pcVar20 + 8) >> 0x20) * 0x18;
                  cVar5 = pcVar18[4];
                  pcVar13 = param_1;
                  pcVar28 = pcVar18;
                  local_80 = pcVar18;
                  if (((byte)cVar5 >> 4 == 0) || (((byte)pcVar18[5] & 3) - 1 < 2))
                  goto LAB_00788cf6;
                  if ((pcVar18 == *(code **)(param_1 + 0x410)) && (*(uint *)(param_1 + 0x418) == 0))
                  {
                    local_80 = *(code **)(param_1 + 0x428);
                    pcVar13 = *(code **)(param_1 + 0x420);
                  }
                  else {
                    uVar29 = *(uint *)pcVar18;
                    *(code **)(param_1 + 0x410) = pcVar18;
                    *(uint *)(param_1 + 0x418) = 0;
                    lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                    lVar27 = 0;
                    if (((byte)param_1[0x31e] & 0x20) != 0) {
                      lVar27 = *(long *)param_1;
                    }
                    *(undefined8 *)((long)ppcVar25 + -8) = 0;
                    uVar8 = local_b0;
                    *(undefined8 *)((long)ppcVar25 + -0x10) = 9;
                    local_a0 = pcVar18;
                    *(undefined8 *)((long)ppcVar25 + -0x18) = 0x788985;
                    pcVar13 = (code *)FUN_007b82e0((ulong)uVar29 + lVar7 + lVar27,param_1,&local_80,
                                                   uVar8,0);
                    *(code **)(param_1 + 0x420) = pcVar13;
                    *(code **)(param_1 + 0x428) = local_80;
                    pcVar28 = local_a0;
                  }
                  pcVar18 = local_80;
                  if (local_80 != (code *)0x0) goto LAB_00788e24;
LAB_007889b6:
                  pcVar13 = (code *)(*(long *)(pcVar20 + 0x10) + *(long *)param_1);
                } while (local_cc != 0);
              } while( true );
            }
            lVar27 = 0;
            lVar7 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            if (((byte)param_1[0x31e] & 0x20) != 0) {
              lVar27 = *(long *)param_1;
              lVar7 = lVar7 + lVar27;
            }
            lVar9 = *(long *)(param_1 + 0x1d0);
            local_90 = (code *)(lVar7 + (uVar10 >> 0x20) * 0x18);
            if (lVar9 != 0) {
              lVar9 = *(long *)(param_1 + 0x2e8) +
                      (ulong)(*(ushort *)((uVar10 >> 0x20) * 2 + lVar27 + *(long *)(lVar9 + 8)) &
                             0x7fff) * 0x18;
            }
            cVar5 = local_90[4];
            pcVar30 = param_1;
            local_80 = local_90;
            if (((byte)cVar5 >> 4 == 0) ||
               (uVar29 = ((byte)local_90[5] & 3) - 1, pcVar13 = (code *)(ulong)uVar29, uVar29 < 2))
            {
LAB_00788506:
              uVar2 = *(ushort *)(local_80 + 6);
              pcVar13 = (code *)(ulong)uVar2;
              if (uVar2 == 0xfff1) {
                local_a0 = (code *)0x0;
              }
              else {
                local_a0 = *(code **)pcVar30;
              }
              local_98 = *(code **)(local_80 + 8);
              if (((((byte)cVar5 & 0xf) == 10) && (uVar2 != 0)) && (local_cc == 0)) {
                if ((param_1 != pcVar30) && (((byte)pcVar30[0x31c] & 4) == 0)) {
                  lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                  if (((byte)param_1[0x31e] & 0x20) != 0) {
                    lVar7 = lVar7 + *(long *)param_1;
                  }
                  pcVar15 = *(char **)PTR_PTR_0093adf8;
                  lVar7 = lVar7 + (ulong)*(uint *)local_90;
                  uVar8 = *(undefined8 *)(param_1 + 8);
                  if (((byte)pcVar30[0x31c] & 3) == 0) {
LAB_007893bb:
                    if (pcVar15 == (char *)0x0) {
                      pcVar15 = "<program name unknown>";
                    }
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((long)ppcVar25 + -8) = 0x7893d4;
                    FUN_007873c0("%s: IFUNC symbol \'%s\' referenced in \'%s\' is defined in the executable and creates an unsatisfiable circular dependency.\n"
                                 ,pcVar15,lVar7,uVar8);
                  }
                  pcVar13 = *(code **)(pcVar30 + 8);
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = "<program name unknown>";
                  }
                  local_b8 = pcVar18;
                  local_a8 = pcVar28;
                  local_90 = pcVar30;
                  *(undefined8 *)((long)ppcVar25 + -8) = 0x789158;
                  FUN_00787310("%s: Relink `%s\' with `%s\' for IFUNC symbol `%s\'\n",pcVar15);
                  pcVar30 = local_90;
                  pcVar28 = local_a8;
                  pcVar18 = local_b8;
                }
                pcVar11 = local_98 + (long)local_a0;
                local_b8 = pcVar18;
                local_a8 = pcVar28;
                local_90 = pcVar30;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x789192;
                (*pcVar11)();
                pcVar30 = local_90;
                pcVar28 = local_a8;
                pcVar18 = local_b8;
                if (local_80 == (code *)0x0) goto LAB_00787c9c;
              }
              pcVar13 = *(code **)(pcVar30 + 0x458);
              if (pcVar13 + 1 < (code *)0x2) {
                local_a0 = pcVar18;
                local_98 = pcVar28;
                local_90 = pcVar30;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x789070;
                FUN_00787560(pcVar30);
                pcVar13 = *(code **)(local_90 + 0x458);
                pcVar28 = local_98;
                pcVar18 = local_a0;
              }
              *(long *)((code *)pcVar31 + 8) =
                   (*(long *)(local_80 + 8) - (long)pcVar13) + *(long *)(pcVar21 + 0x10);
              *(code **)pcVar31 = FUN_0078d2b0;
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
                lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 8);
                uVar29 = *(uint *)local_90;
                local_a0 = pcVar18;
                *(undefined8 *)((long)ppcVar25 + -8) = 0;
                *(undefined8 *)((long)ppcVar25 + -0x10) = 9;
                uVar8 = local_b0;
                local_98 = pcVar28;
                *(undefined8 *)((long)ppcVar25 + -0x18) = 0x787c65;
                pcVar30 = (code *)FUN_007b82e0(lVar27 + lVar7 + (ulong)uVar29,param_1,&local_80,
                                               uVar8,lVar9,1);
                *(code **)(param_1 + 0x420) = pcVar30;
                *(code **)(param_1 + 0x428) = local_80;
                pcVar13 = *(code **)((long)ppcVar25 + -8);
                pcVar28 = local_98;
                pcVar18 = local_a0;
              }
              if (local_80 != (code *)0x0) {
                cVar5 = local_80[4];
                goto LAB_00788506;
              }
LAB_00787c9c:
              *(long *)((code *)pcVar31 + 8) = *(long *)(pcVar21 + 0x10);
              *(long *)pcVar31 = 0x78d2c0;
            }
          }
          pcVar21 = pcVar21 + 0x18;
        } while (pcVar21 < pcVar28);
LAB_007879dc:
        if ((pcVar20 != (code *)0x0) && (pcVar20 <= pcVar18)) {
          if (local_cc == 0) {
            do {
              if (*(uint *)(pcVar20 + 8) == 0x25) {
                lVar7 = *(long *)pcVar20;
                lVar27 = *(long *)(pcVar20 + 0x10);
                lVar9 = *(long *)param_1;
                *(undefined8 *)((long)ppcVar25 + -8) = 0x787a1b;
                uVar8 = (*(code *)(lVar27 + lVar9))();
                *(undefined8 *)(pcVar17 + lVar7) = uVar8;
              }
              pcVar20 = pcVar20 + 0x18;
            } while (pcVar20 <= pcVar18);
          }
          else {
            do {
              while (*(uint *)(pcVar20 + 8) != 0x25) {
                pcVar20 = pcVar20 + 0x18;
                if (pcVar18 < pcVar20) goto LAB_00787a2a;
              }
              pcVar21 = pcVar20 + 0x18;
              *(long *)(pcVar17 + *(long *)pcVar20) = *(long *)param_1 + *(long *)(pcVar20 + 0x10);
              pcVar20 = pcVar21;
            } while (pcVar21 <= pcVar18);
          }
        }
      }
    }
LAB_00787a2a:
    local_c8 = local_c8 + 4;
    if (local_c8 == local_e0) {
      if ((local_d0 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
        uVar26 = *(ulong *)(*(long *)(param_1 + 0x50) + 8);
        uVar10 = (ulong)(*(long *)(*(long *)(param_1 + 0xe0) + 8) == 7) * 8 + 0x10;
        local_90 = param_1;
        *(undefined8 *)((long)ppcVar25 + -8) = 0x787a94;
        lVar7 = FUN_00711600(0x20,uVar26 / uVar10,uVar26 % uVar10);
        *(long *)(local_90 + 0x340) = lVar7;
        param_1 = local_90;
        if (lVar7 == 0) {
          uVar8 = *(undefined8 *)(local_90 + 8);
          pcVar15 = *(char **)PTR_PTR_0093adf8;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = "<program name unknown>";
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)ppcVar25 + -8) = 0x789414;
          FUN_007873c0("%s: out of memory to store relocation results for %s\n",pcVar15,uVar8);
        }
      }
      param_1[0x31c] = (code)((byte)param_1[0x31c] | 4);
      plVar32 = local_e8;
      while( true ) {
        if (plVar32 == (long *)0x0) {
          if (*(long *)(param_1 + 0x478) != 0) {
            uVar26 = *(long *)(param_1 + 0x470) + *(long *)param_1 & -DAT_0093eb18;
            uVar10 = *(long *)(param_1 + 0x478) + *(long *)(param_1 + 0x470) + *(long *)param_1 &
                     -DAT_0093eb18;
            if (uVar26 != uVar10) {
              local_90 = param_1;
              *(undefined8 *)((long)ppcVar25 + -8) = 0x7887c8;
              iVar6 = FUN_0076f0b0(uVar26,uVar10 - uVar26,1);
              if (iVar6 < 0) {
                uVar8 = *(undefined8 *)(local_90 + 8);
                uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)ppcVar25 + -8) = 0x7887f3;
                FUN_0078db10(uVar3,uVar8,0,
                             "cannot apply additional memory protection after relocation");
              }
            }
          }
          return;
        }
        lVar9 = plVar32[2];
        lVar7 = plVar32[1];
        lVar27 = *plVar32;
        *(undefined8 *)((long)ppcVar25 + -8) = 0x78901d;
        iVar6 = FUN_0076f0b0(lVar27,lVar7,(int)lVar9);
        if (iVar6 < 0) break;
        plVar32 = (long *)plVar32[3];
      }
      pcVar15 = "cannot restore segment prot after reloc";
LAB_007893de:
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)ppcVar25 + -8) = 0x7893f3;
      FUN_0078db10(uVar3,uVar8,0,pcVar15);
    }
    pcVar17 = *(code **)param_1;
  } while( true );
}

