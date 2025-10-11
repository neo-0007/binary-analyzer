
long * FUN_007b66f0(long *param_1,undefined8 param_2,undefined4 param_3,int param_4,uint param_5,
                   ulong param_6)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  long *local_3d0;
  long local_3b8;
  char local_3a1;
  long *local_3a0;
  undefined8 local_398 [2];
  undefined1 local_388 [856];
  
  if ((long)param_6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("nsid >= 0","dl-load.c",0x7ee,"_dl_map_object");
  }
  if (DAT_0093eb28 <= param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("nsid < GL(dl_nns)","dl-load.c",0x7ef,"_dl_map_object");
  }
  uVar2 = DAT_0094b0e4;
  for (plVar7 = (long *)(&PTR_DAT_0093eb60)[param_6 * 0x14]; DAT_0094b0e4 = uVar2,
      plVar7 != (long *)0x0; plVar7 = (long *)plVar7[3]) {
    if (((*(byte *)((long)plVar7 + 0x31e) >> 1 | *(byte *)((long)plVar7 + 0x31d) >> 5) & 1) == 0) {
      iVar5 = FUN_007b93e0(param_2,plVar7);
      if (iVar5 != 0) {
        return plVar7;
      }
      if (((*(byte *)((long)plVar7 + 0x31d) & 0x10) == 0) && (plVar7[0x16] != 0)) {
        lVar6 = 0;
        if ((*(byte *)((long)plVar7 + 0x31e) & 0x20) != 0) {
          lVar6 = *plVar7;
        }
        iVar5 = thunk_FUN_00712780(param_2,*(long *)(plVar7[0x16] + 8) + *(long *)(plVar7[0xd] + 8)
                                           + lVar6);
        if (iVar5 == 0) {
          FUN_007b4310(plVar7[7],param_2);
          *(byte *)((long)plVar7 + 0x31d) = *(byte *)((long)plVar7 + 0x31d) | 0x10;
          return plVar7;
        }
      }
    }
    uVar2 = DAT_0094b0e4;
  }
  if ((uVar2 & 0x40) == 0) {
    local_3a1 = '\0';
    lVar6 = thunk_FUN_00712710(param_2,0x2f);
    if (lVar6 == 0) {
      local_3b8 = thunk_FUN_007129d0(param_2);
      local_3b8 = local_3b8 + 1;
      if ((uVar2 & 1) != 0) goto LAB_007b6c7c;
LAB_007b6971:
      if (param_1 == (long *)0x0) {
LAB_007b6f56:
        local_3d0 = (long *)PTR_DAT_0093eb60;
LAB_007b6daa:
        if (local_3d0 == (long *)0x0) {
LAB_007b6e3f:
          plVar7 = &DAT_0093aec0;
          if (DAT_0093aec0 != -1) {
            plVar8 = (long *)PTR_DAT_0093eb60;
            if (param_1 != (long *)0x0) goto LAB_007b699a;
            goto LAB_007b6a01;
          }
          if (param_1 != (long *)0x0) goto LAB_007b69c9;
          goto LAB_007b6b59;
        }
        if ((*(byte *)((long)local_3d0 + 0x31c) & 3) == 2) goto LAB_007b6e3f;
        if (local_3d0[0x66] == -1) {
LAB_007b70c1:
          if ((param_5 & 0x8000000) != 0) {
LAB_007b6ff9:
            local_398[0] = 0;
            if (local_3d0[0x25] != 0) {
              lVar6 = 0;
              if ((*(byte *)((long)local_3d0 + 0x31e) & 0x20) != 0) {
                lVar6 = *local_3d0;
              }
              cVar4 = FUN_007b60e0(local_398,
                                   *(long *)(local_3d0[0xd] + 8) + *(long *)(local_3d0[0x25] + 8) +
                                   lVar6,local_3d0,"RUNPATH");
              if (cVar4 != '\0') {
                if (param_1 != (long *)0x0) {
                  local_3d0 = param_1;
                }
                iVar5 = FUN_007b3d50(param_2,local_3b8,param_5,local_398,&local_3a0,local_388,
                                     local_3d0,&local_3a1);
                goto LAB_007b6e36;
              }
            }
          }
          goto LAB_007b6e3f;
        }
        if (local_3d0[0x66] == 0) {
          if (local_3d0[0x17] == 0) {
            local_3d0[0x66] = -1;
            goto LAB_007b70c1;
          }
          lVar6 = 0;
          if ((*(byte *)((long)local_3d0 + 0x31e) & 0x20) != 0) {
            lVar6 = *local_3d0;
          }
          cVar4 = FUN_007b60e0(local_3d0 + 0x66,
                               *(long *)(local_3d0[0xd] + 8) + *(long *)(local_3d0[0x17] + 8) +
                               lVar6,local_3d0,"RPATH");
          if (cVar4 != '\0') goto LAB_007b6df5;
          if ((param_5 & 0x8000000) == 0) goto LAB_007b6e3f;
LAB_007b6fde:
          if ((*(byte *)((long)local_3d0 + 0x31c) & 3) == 2) goto LAB_007b6e3f;
          goto LAB_007b6ff9;
        }
LAB_007b6df5:
        plVar7 = local_3d0;
        if (param_1 != (long *)0x0) {
          plVar7 = param_1;
        }
        iVar5 = FUN_007b3d50(param_2,local_3b8,param_5,local_3d0 + 0x66,&local_3a0,local_388,plVar7,
                             &local_3a1);
        if ((param_5 & 0x8000000) == 0) {
LAB_007b6e36:
          plVar8 = local_3a0;
          if (iVar5 == -1) goto LAB_007b6e3f;
        }
        else {
          plVar8 = local_3a0;
          if (iVar5 == -1) goto LAB_007b6fde;
        }
      }
      else {
LAB_007b697a:
        puVar3 = PTR_DAT_0093eb60;
        if (param_1[0x25] == 0) {
          local_3d0 = (long *)PTR_DAT_0093eb60;
          bVar1 = false;
          plVar7 = param_1;
          do {
            if (plVar7[0x66] != -1) {
              if (plVar7[0x66] == 0) {
                if (plVar7[0x17] == 0) {
                  plVar7[0x66] = -1;
                }
                else {
                  lVar6 = 0;
                  if ((*(byte *)((long)plVar7 + 0x31e) & 0x20) != 0) {
                    lVar6 = *plVar7;
                  }
                  cVar4 = FUN_007b60e0(plVar7 + 0x66,
                                       *(long *)(plVar7[0xd] + 8) + *(long *)(plVar7[0x17] + 8) +
                                       lVar6,plVar7,"RPATH");
                  if (cVar4 != '\0') goto LAB_007b6a70;
                }
              }
              else {
LAB_007b6a70:
                iVar5 = FUN_007b3d50(param_2,local_3b8,param_5,plVar7 + 0x66,&local_3a0,local_388,
                                     param_1,&local_3a1);
                plVar8 = local_3a0;
                if (iVar5 != -1) goto LAB_007b6a1e;
                bVar1 = (bool)(bVar1 | (long *)puVar3 == plVar7);
              }
            }
            plVar7 = (long *)plVar7[0x5c];
          } while (plVar7 != (long *)0x0);
          if (!bVar1) goto LAB_007b6daa;
          goto LAB_007b6e3f;
        }
        if (DAT_0093aec0 == -1) {
LAB_007b69c9:
          if (param_1[0x78] != -1) {
            plVar7 = param_1 + 0x78;
            plVar8 = param_1;
            if (param_1[0x78] != 0) {
LAB_007b6a01:
              iVar5 = FUN_007b3d50(param_2,local_3b8,param_5,plVar7,&local_3a0,local_388,plVar8,
                                   &local_3a1);
              goto LAB_007b6a15;
            }
            if (param_1[0x25] == 0) {
              param_1[0x78] = -1;
            }
            else {
              lVar6 = 0;
              if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
                lVar6 = *param_1;
              }
              cVar4 = FUN_007b60e0(plVar7,*(long *)(param_1[0xd] + 8) + *(long *)(param_1[0x25] + 8)
                                          + lVar6,param_1,"RUNPATH");
              if (cVar4 != '\0') goto LAB_007b6a01;
            }
          }
        }
        else {
LAB_007b699a:
          iVar5 = FUN_007b3d50(param_2,local_3b8,param_5,&DAT_0093aec0,&local_3a0,local_388,param_1,
                               &local_3a1);
          plVar8 = local_3a0;
          if (iVar5 != -1) goto LAB_007b6a1e;
          if (param_1 != (long *)0x0) goto LAB_007b69c9;
LAB_007b6a15:
          plVar8 = local_3a0;
          if (iVar5 != -1) goto LAB_007b6a1e;
        }
LAB_007b6b59:
        local_3a0 = (long *)0x0;
        if (((((param_5 & 0x4000000) == 0) || (DAT_0093ae30 == 0)) && (DAT_0094ae9c == 0)) &&
           (plVar8 = (long *)FUN_0078c0a0(param_2), plVar8 != (long *)0x0)) {
          if (param_1 == (long *)0x0) {
            if ((PTR_DAT_0093eb60[0x3ed] & 8) != 0) goto LAB_007b6ca9;
LAB_007b6baa:
            iVar5 = FUN_007b3030(plVar8,local_388,&local_3a1);
            if (iVar5 != -1) goto LAB_007b6a1e;
          }
          else {
            if ((*(byte *)((long)param_1 + 0x3ed) & 8) == 0) goto LAB_007b6baa;
LAB_007b6ca9:
            if (((((plVar8[1] != 0x756e696c2d34365f || *plVar8 != 0x3638782f62696c2f) ||
                  ((int)plVar8[2] != 0x6e672d78)) || (*(short *)((long)plVar8 + 0x14) != 0x2f75)) &&
                (((plVar8[1] != 0x2d34365f3638782f || *plVar8 != 0x62696c2f7273752f ||
                  (plVar8[2] != 0x6e672d78756e696c)) || ((short)plVar8[3] != 0x2f75)))) &&
               ((((int)*plVar8 != 0x62696c2f || (*(char *)((long)plVar8 + 4) != '/')) &&
                ((*plVar8 != 0x62696c2f7273752f || ((char)plVar8[1] != '/')))))) goto LAB_007b6baa;
          }
          FUN_007104f0();
        }
        plVar7 = param_1;
        plVar8 = local_3a0;
        if (((param_1 == (long *)0x0) &&
            (plVar7 = (long *)(&PTR_DAT_0093eb60)[param_6 * 0x14], plVar7 == (long *)0x0)) ||
           ((*(byte *)((long)plVar7 + 0x3ed) & 8) == 0)) {
          iVar5 = -1;
          if (DAT_0093aeb0 != -1) {
            iVar5 = FUN_007b3d50(param_2,local_3b8,param_5,&DAT_0093aeb0,&local_3a0,local_388,plVar7
                                 ,&local_3a1);
            plVar8 = local_3a0;
          }
        }
        else {
          iVar5 = -1;
        }
      }
LAB_007b6a1e:
      local_3a0 = plVar8;
      if ((DAT_0094b0e4 & 1) != 0) {
        FUN_00787060(&DAT_008243ea);
      }
      if ((param_5 & 0x10000000) != 0) {
        param_1 = (long *)0x0;
      }
      if (iVar5 != -1) goto LAB_007b6875;
      goto LAB_007b68d2;
    }
    if (param_1 == (long *)0x0) goto LAB_007b68b1;
LAB_007b6834:
    local_3a0 = (long *)FUN_007b5cf0(param_1,param_2);
  }
  else {
    if (param_1 != (long *)0x0) {
      pcVar9 = (char *)param_1[1];
      if ((*pcVar9 == '\0') && (pcVar9 = *(char **)PTR_PTR_0093adf8, pcVar9 == (char *)0x0)) {
        pcVar9 = "<main program>";
      }
      pcVar10 = "\nfile=%s [%lu];  needed by %s [%lu]\n";
      if ((param_5 & 0x10000000) != 0) {
        pcVar10 = "\nfile=%s [%lu];  dynamically loaded by %s [%lu]\n";
      }
      FUN_00787060(pcVar10,param_2,param_6,pcVar9,param_1[6]);
      local_3a1 = '\0';
      lVar6 = thunk_FUN_00712710(param_2,0x2f);
      if (lVar6 == 0) {
        local_3b8 = thunk_FUN_007129d0(param_2);
        local_3b8 = local_3b8 + 1;
        if ((DAT_0094b0e4 & 1) != 0) goto LAB_007b6c7c;
        goto LAB_007b697a;
      }
      goto LAB_007b6834;
    }
    local_3a1 = '\0';
    lVar6 = thunk_FUN_00712710(param_2,0x2f);
    if (lVar6 == 0) {
      local_3b8 = thunk_FUN_007129d0(param_2);
      local_3b8 = local_3b8 + 1;
      if ((uVar2 & 1) != 0) {
LAB_007b6c7c:
        FUN_00787060("find library=%s [%lu]; searching\n",param_2,param_6);
        goto LAB_007b6971;
      }
      goto LAB_007b6f56;
    }
LAB_007b68b1:
    local_3a0 = (long *)FUN_007128a0(param_2);
  }
  if (local_3a0 != (long *)0x0) {
    iVar5 = FUN_007b3610(local_3a0,local_388,&local_3a1);
    if (iVar5 != -1) {
      if ((param_5 & 0x10000000) != 0) {
        param_1 = (long *)0x0;
      }
LAB_007b6875:
      local_398[0] = DAT_0093ae00;
      plVar7 = (long *)FUN_007b4400(param_2,iVar5,local_388,local_3a0,param_1,param_3,param_5,
                                    local_398,param_6);
      return plVar7;
    }
    FUN_007104f0(local_3a0,0xffffffff);
  }
  if ((param_5 & 0x10000000) != 0) {
    param_1 = (long *)0x0;
  }
LAB_007b68d2:
  if ((param_4 == 0) || ((DAT_0094b0e4 & 0x800) != 0)) {
    if (local_3a1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0078db10(*(undefined4 *)(in_FS_OFFSET + -0x58),param_2,0,"cannot open shared object file")
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0078db10(0,param_2,0,"wrong ELF class: ELFCLASS32");
  }
  lVar6 = FUN_007128a0(param_2);
  if ((lVar6 != 0) &&
     (plVar7 = (long *)FUN_007b96e0(lVar6,param_2,param_3,param_1,param_5,param_6),
     plVar7 != (long *)0x0)) {
    *(ushort *)((long)plVar7 + 0x31c) = *(ushort *)((long)plVar7 + 0x31c) | 0x2004;
    plVar7[0x62] = (long)&DAT_0082fcd8;
    *(undefined4 *)((long)plVar7 + 0x2f4) = 1;
    FUN_007b9640(plVar7,param_6);
    return plVar7;
  }
  FUN_007104f0(lVar6);
                    /* WARNING: Subroutine does not return */
  FUN_0078db10(0xc,param_2,0,"cannot create shared object descriptor");
}

