
/* WARNING: Removing unreachable block (ram,0x0040c82c) */

bool FUN_0040c000(long *param_1,long *param_2,long param_3,undefined1 *param_4,undefined8 param_5,
                 long param_6,long param_7,long param_8,int param_9,undefined8 param_10)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  undefined1 *local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_a4;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_1[7] != 0) {
    if (param_1[1] == 0) {
      FUN_0051f420();
      bVar18 = false;
      FUN_0051f540("../crypto/evp/m_sigver.c",0x38,"do_sigver_init");
      FUN_0051f8f0(6,0x86,0);
      goto LAB_0040c3ff;
    }
    pcVar13 = *(code **)(param_1[1] + 0xb0);
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)();
    }
    param_1[7] = 0;
  }
  piVar12 = (int *)param_1[5];
  if (piVar12 == (int *)0x0) {
    if (param_7 == 0) {
      piVar12 = (int *)FUN_00413530(param_5,param_8,param_6);
      param_1[5] = (long)piVar12;
    }
    else {
      piVar12 = (int *)FUN_00413640(param_8,param_7);
      param_1[5] = (long)piVar12;
    }
    if (piVar12 != (int *)0x0) {
      FUN_0051f000();
      if (*(long *)(piVar12 + 8) != 0) {
        lVar11 = 0;
        bVar18 = false;
        goto joined_r0x0040c343;
      }
      goto LAB_0040c258;
    }
    goto LAB_0040c3fc;
  }
  FUN_0051f000();
  if (*(long *)(piVar12 + 8) == 0) {
LAB_0040c258:
    FUN_0051f050();
    FUN_0053e0f0(local_a0);
    local_a0 = 0;
    local_e8 = param_3;
    if ((param_3 == 0) && (param_4 != (undefined1 *)0x0)) {
      local_e8 = FUN_0040d750(*(undefined8 *)(piVar12 + 2));
    }
    puVar15 = (undefined4 *)param_1[5];
    lVar11 = *(long *)(puVar15 + 0x1e);
    if (lVar11 == 0) {
      FUN_0051f420();
      bVar18 = false;
      FUN_0051f540("../crypto/evp/m_sigver.c",0x131,"do_sigver_init");
      FUN_0051f8f0(6,0x96,0);
      goto LAB_0040c3ff;
    }
    if (((*(uint *)(lVar11 + 4) & 4) == 0) && (local_e8 == 0)) {
      iVar5 = FUN_0040ea70(param_8,&local_a4);
      if (0 < iVar5) {
        uVar10 = FUN_00423b00(local_a4);
        local_e8 = FUN_0040d800(uVar10);
        if (local_e8 != 0) {
          puVar15 = (undefined4 *)param_1[5];
          lVar11 = *(long *)(puVar15 + 0x1e);
          goto LAB_0040c2b7;
        }
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/m_sigver.c",0x13e,"do_sigver_init");
      FUN_0051f8f0(6,0x9e,0);
      bVar18 = false;
      goto LAB_0040c3ff;
    }
LAB_0040c2b7:
    if (param_9 != 0) {
      if (*(code **)(lVar11 + 0x80) == (code *)0x0) {
        if (*(long *)(lVar11 + 0xd8) == 0) {
          iVar5 = FUN_00416cf0();
          if (iVar5 < 1) goto LAB_0040c3fc;
LAB_0040ca64:
          puVar15 = (undefined4 *)param_1[5];
        }
        else {
          *puVar15 = 0x20;
          param_1[6] = (long)FUN_0040bfc0;
        }
      }
      else {
        iVar5 = (**(code **)(lVar11 + 0x80))(puVar15,param_1);
        if (iVar5 < 1) goto LAB_0040c3fc;
        puVar15 = (undefined4 *)param_1[5];
        *puVar15 = 0x100;
      }
LAB_0040c68c:
      iVar5 = FUN_004151b0(puVar15,local_e8);
      if (iVar5 < 1) goto LAB_0040c3fc;
      if (param_2 != (long *)0x0) {
        *param_2 = param_1[5];
      }
      bVar18 = true;
      if ((*(byte *)(*(long *)(param_1[5] + 0x78) + 4) & 4) != 0) goto LAB_0040c3ff;
      iVar5 = FUN_00407430(param_1,local_e8,param_7);
      if (iVar5 == 0) goto LAB_0040c3fc;
      lVar11 = param_1[5];
      bVar4 = *(byte *)(lVar11 + 0xa0) & 0xfe;
      *(byte *)(lVar11 + 0xa0) = bVar4;
      if (*(long *)(*(long *)(lVar11 + 0x78) + 0xf8) != 0) {
        *(byte *)(lVar11 + 0xa0) = bVar4 | 1;
      }
      goto LAB_0040c710;
    }
    if (*(code **)(lVar11 + 0x70) == (code *)0x0) {
      if (*(long *)(lVar11 + 0xd0) != 0) {
        *puVar15 = 0x10;
        param_1[6] = (long)FUN_0040bfc0;
        goto LAB_0040c68c;
      }
      iVar5 = FUN_00416ae0();
      if (0 < iVar5) goto LAB_0040ca64;
    }
    else {
      iVar5 = (**(code **)(lVar11 + 0x70))(puVar15,param_1);
      if (0 < iVar5) {
        puVar15 = (undefined4 *)param_1[5];
        *puVar15 = 0x80;
        goto LAB_0040c68c;
      }
    }
  }
  else {
    lVar11 = 0;
    bVar18 = false;
    if (((param_8 == 0) && (*piVar12 == (-(uint)(param_9 == 0) & 0xffffff80) + 0x100)) &&
       (lVar11 = *(long *)(piVar12 + 10), lVar11 != 0)) {
      bVar18 = *(long *)(piVar12 + 0xc) != 0;
    }
joined_r0x0040c343:
    if (param_6 == 0) {
      local_e0 = *(long *)(piVar12 + 4);
      if (*(long *)(piVar12 + 0x22) == 0) goto LAB_0040c540;
LAB_0040c10d:
      if (bVar18) {
        if (param_4 == (undefined1 *)0x0 && param_3 == 0) {
          local_f0 = (undefined1 *)FUN_0040ab30(*param_1);
          lVar9 = 0;
          if ((local_f0 != (undefined1 *)0x0) &&
             (iVar5 = thunk_FUN_00712780(local_f0,"UNDEF"), iVar5 != 0)) {
            if (param_2 != (long *)0x0) goto LAB_0040c36b;
            goto LAB_0040c4b1;
          }
          local_f0 = (undefined1 *)0x0;
          if (param_2 != (long *)0x0) {
LAB_0040c36b:
            *param_2 = (long)piVar12;
            goto LAB_0040c373;
          }
          lVar9 = 0;
          puVar3 = local_f0;
        }
        else {
          lVar9 = 0;
LAB_0040c363:
          local_f0 = param_4;
          if (param_2 != (long *)0x0) goto LAB_0040c36b;
LAB_0040c373:
          puVar3 = local_f0;
          if (param_3 == 0) {
            if (local_f0 == (undefined1 *)0x0) {
              if (!bVar18) {
                local_f0 = local_98;
                iVar5 = FUN_0053de70(local_a0,lVar9,local_f0,0x50);
                if ((0 < iVar5) && (iVar5 = thunk_FUN_00712780(local_f0,"UNDEF"), iVar5 != 0))
                goto LAB_0040c4b1;
                local_f0 = (undefined1 *)0x0;
                puVar3 = local_f0;
              }
            }
            else {
LAB_0040c4b1:
              FUN_00406a90(param_1,1,0);
              FUN_0051f000();
              lVar6 = FUN_004069d0(*(undefined8 *)(piVar12 + 2),local_f0,local_e0);
              param_1[8] = lVar6;
              if (lVar6 == 0) {
                lVar6 = FUN_0040d800(local_f0);
                param_1[1] = lVar6;
                *param_1 = lVar6;
                if (lVar6 == 0) {
                  FUN_0051f1a0();
                  FUN_0051f420();
                  uVar10 = 0xfd;
                  goto LAB_0040c5ce;
                }
              }
              else {
                *param_1 = lVar6;
                param_1[1] = lVar6;
              }
              FUN_0051f050();
              puVar3 = local_f0;
            }
          }
          else {
            *param_1 = param_3;
            if (((local_f0 == (undefined1 *)0x0) &&
                (puVar14 = (undefined1 *)FUN_0040ab30(param_3), puVar14 != (undefined1 *)0x0)) &&
               (iVar5 = thunk_FUN_00712780(puVar14,"UNDEF"), puVar3 = puVar14, iVar5 == 0)) {
              puVar3 = local_f0;
            }
          }
        }
        local_f0 = puVar3;
        if (param_9 == 0) {
          pcVar13 = *(code **)(lVar11 + 0x68);
          if (pcVar13 != (code *)0x0) goto LAB_0040c3af;
          FUN_0051f420();
          uVar10 = 0x10e;
        }
        else {
          pcVar13 = *(code **)(lVar11 + 0x88);
          if (pcVar13 != (code *)0x0) {
LAB_0040c3af:
            iVar5 = (*pcVar13)(*(undefined8 *)(piVar12 + 0xc),local_f0,lVar9,param_10);
            if (iVar5 < 1) {
              if (local_f0 == (undefined1 *)0x0) {
                if (param_3 == 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/evp/m_sigver.c",0x11c,"do_sigver_init");
                  FUN_0051f8f0(6,0x9e,0);
                }
                goto LAB_0040c3e2;
              }
              bVar18 = false;
              if (0 < iVar5) goto LAB_0040c710;
            }
            else {
LAB_0040c710:
              iVar5 = FUN_004157c0(piVar12);
              bVar18 = 0 < iVar5;
            }
            FUN_0053e0f0(local_a0);
            goto LAB_0040c3ff;
          }
          FUN_0051f420();
          uVar10 = 0x107;
        }
      }
      else {
        FUN_00412da0(piVar12);
        if (*(long *)(*(long *)(piVar12 + 0x22) + 0x60) == 0) {
          lVar9 = *(long *)(piVar12 + 8);
        }
        else {
          lVar9 = *(long *)(piVar12 + 8);
          if (*(long *)(*(long *)(piVar12 + 0x22) + 0x60) != lVar9) {
            FUN_0051f1a0();
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/m_sigver.c",0x70,"do_sigver_init");
            FUN_0051f8f0(6,0xc0103,0);
            goto LAB_0040c3e2;
          }
        }
        uVar16 = 1;
        lVar6 = FUN_0053e0a0(lVar9,0xc);
        if (lVar6 == 0) {
          FUN_0051f1a0();
          FUN_0051f420();
          uVar10 = 0x77;
        }
        else {
          do {
            FUN_00415cd0(lVar11);
            FUN_0053e0f0(local_a0);
            if (uVar16 == 2) {
              uVar10 = FUN_0053e6e0(*(undefined8 *)(piVar12 + 8));
              lVar11 = FUN_004163d0(uVar10,lVar6,*(undefined8 *)(piVar12 + 4));
              if (lVar11 == 0) goto LAB_0040c258;
LAB_0040c19a:
              uVar1 = *(undefined8 *)(piVar12 + 4);
              uVar7 = FUN_0053e710(*(undefined8 *)(piVar12 + 8));
              lVar8 = FUN_0053e660(uVar10,uVar7,uVar1);
              local_a0 = lVar8;
              if (lVar8 == 0) {
                lVar9 = 0;
                bVar17 = true;
              }
              else {
                lVar9 = FUN_0040fbe0(*(undefined8 *)(piVar12 + 0x22),*(undefined8 *)(piVar12 + 2),
                                     &local_a0,*(undefined8 *)(piVar12 + 4));
                bVar17 = lVar9 == 0;
                if (local_a0 != 0) goto LAB_0040c1f4;
              }
              FUN_0053e0f0(lVar8);
            }
            else {
              lVar11 = FUN_00416390(*(undefined8 *)(piVar12 + 2),lVar6,*(undefined8 *)(piVar12 + 4))
              ;
              if (lVar11 != 0) {
                uVar10 = FUN_00416380(lVar11);
                goto LAB_0040c19a;
              }
              lVar11 = 0;
              bVar17 = true;
              lVar9 = 0;
            }
LAB_0040c1f4:
            bVar2 = uVar16 < 2;
            uVar16 = 2;
          } while ((bool)(bVar2 & bVar17));
          if (lVar9 == 0) {
            FUN_00415cd0(lVar11);
            FUN_0051f1a0();
            FUN_0051f420();
            uVar10 = 0xc2;
          }
          else {
            FUN_0051f050();
            *(long *)(piVar12 + 10) = lVar11;
            uVar10 = *(undefined8 *)(lVar11 + 0x18);
            pcVar13 = *(code **)(lVar11 + 0x30);
            *piVar12 = (-(uint)(param_9 == 0) & 0xffffff80) + 0x100;
            uVar10 = FUN_00420b60(uVar10);
            lVar6 = (*pcVar13)(uVar10,local_e0);
            *(long *)(piVar12 + 0xc) = lVar6;
            if (lVar6 != 0) goto LAB_0040c363;
            FUN_0051f420();
            uVar10 = 0xd0;
          }
        }
      }
LAB_0040c5ce:
      FUN_0051f540("../crypto/evp/m_sigver.c",uVar10,"do_sigver_init");
      FUN_0051f8f0(6,0x86,0);
    }
    else {
      local_e0 = param_6;
      if (*(long *)(piVar12 + 0x22) != 0) goto LAB_0040c10d;
LAB_0040c540:
      FUN_0051f1a0();
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/m_sigver.c",0x5e,"do_sigver_init");
      FUN_0051f8f0(6,0x9a,0);
    }
LAB_0040c3e2:
    FUN_00412da0(piVar12);
    *piVar12 = 0;
    FUN_0053e0f0(local_a0);
  }
LAB_0040c3fc:
  bVar18 = false;
LAB_0040c3ff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

