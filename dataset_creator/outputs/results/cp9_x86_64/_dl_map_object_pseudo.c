
long * _dl_map_object(long *param_1,char *param_2,undefined4 param_3,int param_4,uint param_5,
                     ulong param_6)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  size_t sVar9;
  long *plVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  long *local_3d0;
  long local_3b8;
  char local_3a1;
  long *local_3a0;
  undefined8 local_398 [2];
  undefined1 local_388 [856];
  
  if ((long)param_6 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nsid >= 0","dl-load.c",0x7ee,"_dl_map_object");
  }
  if (_dl_nns <= param_6) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nsid < GL(dl_nns)","dl-load.c",0x7ef,"_dl_map_object");
  }
  uVar2 = _dl_debug_mask;
  for (plVar8 = (long *)(&_dl_ns)[param_6 * 0x14]; _dl_debug_mask = uVar2, plVar8 != (long *)0x0;
      plVar8 = (long *)plVar8[3]) {
    if (((*(byte *)((long)plVar8 + 0x31e) >> 1 | *(byte *)((long)plVar8 + 0x31d) >> 5) & 1) == 0) {
      iVar5 = _dl_name_match_p(param_2,plVar8);
      if (iVar5 != 0) {
        return plVar8;
      }
      if (((*(byte *)((long)plVar8 + 0x31d) & 0x10) == 0) && (plVar8[0x16] != 0)) {
        lVar6 = 0;
        if ((*(byte *)((long)plVar8 + 0x31e) & 0x20) != 0) {
          lVar6 = *plVar8;
        }
        iVar5 = strcmp(param_2,(char *)(*(long *)(plVar8[0x16] + 8) + *(long *)(plVar8[0xd] + 8) +
                                       lVar6));
        if (iVar5 == 0) {
          add_name_to_object_isra_0(plVar8[7],param_2);
          *(byte *)((long)plVar8 + 0x31d) = *(byte *)((long)plVar8 + 0x31d) | 0x10;
          return plVar8;
        }
      }
    }
    uVar2 = _dl_debug_mask;
  }
  if ((uVar2 & 0x40) == 0) {
    local_3a1 = '\0';
    pcVar7 = strchr(param_2,0x2f);
    if (pcVar7 == (char *)0x0) {
      sVar9 = strlen(param_2);
      local_3b8 = sVar9 + 1;
      if ((uVar2 & 1) != 0) goto LAB_007ad33c;
LAB_007ad031:
      if (param_1 == (long *)0x0) {
LAB_007ad616:
        local_3d0 = (long *)_dl_ns;
LAB_007ad46a:
        if (local_3d0 == (long *)0x0) {
LAB_007ad4ff:
          plVar8 = &__rtld_env_path_list;
          if (__rtld_env_path_list != -1) {
            plVar10 = (long *)_dl_ns;
            if (param_1 != (long *)0x0) goto LAB_007ad05a;
            goto LAB_007ad0c1;
          }
          if (param_1 != (long *)0x0) goto LAB_007ad089;
          goto LAB_007ad219;
        }
        if ((*(byte *)((long)local_3d0 + 0x31c) & 3) == 2) goto LAB_007ad4ff;
        if (local_3d0[0x66] == -1) {
LAB_007ad781:
          if ((param_5 & 0x8000000) != 0) {
LAB_007ad6b9:
            local_398[0] = 0;
            if (local_3d0[0x25] != 0) {
              lVar6 = 0;
              if ((*(byte *)((long)local_3d0 + 0x31e) & 0x20) != 0) {
                lVar6 = *local_3d0;
              }
              cVar4 = decompose_rpath(local_398,
                                      *(long *)(local_3d0[0xd] + 8) + *(long *)(local_3d0[0x25] + 8)
                                      + lVar6,local_3d0,"RUNPATH");
              if (cVar4 != '\0') {
                if (param_1 != (long *)0x0) {
                  local_3d0 = param_1;
                }
                iVar5 = open_path_isra_0(param_2,local_3b8,param_5,local_398,&local_3a0,local_388,
                                         local_3d0,&local_3a1);
                goto LAB_007ad4f6;
              }
            }
          }
          goto LAB_007ad4ff;
        }
        if (local_3d0[0x66] == 0) {
          if (local_3d0[0x17] == 0) {
            local_3d0[0x66] = -1;
            goto LAB_007ad781;
          }
          lVar6 = 0;
          if ((*(byte *)((long)local_3d0 + 0x31e) & 0x20) != 0) {
            lVar6 = *local_3d0;
          }
          cVar4 = decompose_rpath(local_3d0 + 0x66,
                                  *(long *)(local_3d0[0xd] + 8) + *(long *)(local_3d0[0x17] + 8) +
                                  lVar6,local_3d0,"RPATH");
          if (cVar4 != '\0') goto LAB_007ad4b5;
          if ((param_5 & 0x8000000) == 0) goto LAB_007ad4ff;
LAB_007ad69e:
          if ((*(byte *)((long)local_3d0 + 0x31c) & 3) == 2) goto LAB_007ad4ff;
          goto LAB_007ad6b9;
        }
LAB_007ad4b5:
        plVar8 = local_3d0;
        if (param_1 != (long *)0x0) {
          plVar8 = param_1;
        }
        iVar5 = open_path_isra_0(param_2,local_3b8,param_5,local_3d0 + 0x66,&local_3a0,local_388,
                                 plVar8,&local_3a1);
        if ((param_5 & 0x8000000) == 0) {
LAB_007ad4f6:
          plVar10 = local_3a0;
          if (iVar5 == -1) goto LAB_007ad4ff;
        }
        else {
          plVar10 = local_3a0;
          if (iVar5 == -1) goto LAB_007ad69e;
        }
      }
      else {
LAB_007ad03a:
        puVar3 = _dl_ns;
        if (param_1[0x25] == 0) {
          local_3d0 = (long *)_dl_ns;
          bVar1 = false;
          plVar8 = param_1;
          do {
            if (plVar8[0x66] != -1) {
              if (plVar8[0x66] == 0) {
                if (plVar8[0x17] == 0) {
                  plVar8[0x66] = -1;
                }
                else {
                  lVar6 = 0;
                  if ((*(byte *)((long)plVar8 + 0x31e) & 0x20) != 0) {
                    lVar6 = *plVar8;
                  }
                  cVar4 = decompose_rpath(plVar8 + 0x66,
                                          *(long *)(plVar8[0xd] + 8) + *(long *)(plVar8[0x17] + 8) +
                                          lVar6,plVar8,"RPATH");
                  if (cVar4 != '\0') goto LAB_007ad130;
                }
              }
              else {
LAB_007ad130:
                iVar5 = open_path_isra_0(param_2,local_3b8,param_5,plVar8 + 0x66,&local_3a0,
                                         local_388,param_1,&local_3a1);
                plVar10 = local_3a0;
                if (iVar5 != -1) goto LAB_007ad0de;
                bVar1 = (bool)(bVar1 | (long *)puVar3 == plVar8);
              }
            }
            plVar8 = (long *)plVar8[0x5c];
          } while (plVar8 != (long *)0x0);
          if (!bVar1) goto LAB_007ad46a;
          goto LAB_007ad4ff;
        }
        if (__rtld_env_path_list == -1) {
LAB_007ad089:
          if (param_1[0x78] != -1) {
            plVar8 = param_1 + 0x78;
            plVar10 = param_1;
            if (param_1[0x78] != 0) {
LAB_007ad0c1:
              iVar5 = open_path_isra_0(param_2,local_3b8,param_5,plVar8,&local_3a0,local_388,plVar10
                                       ,&local_3a1);
              goto LAB_007ad0d5;
            }
            if (param_1[0x25] == 0) {
              param_1[0x78] = -1;
            }
            else {
              lVar6 = 0;
              if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
                lVar6 = *param_1;
              }
              cVar4 = decompose_rpath(plVar8,*(long *)(param_1[0xd] + 8) +
                                             *(long *)(param_1[0x25] + 8) + lVar6,param_1,"RUNPATH")
              ;
              if (cVar4 != '\0') goto LAB_007ad0c1;
            }
          }
        }
        else {
LAB_007ad05a:
          iVar5 = open_path_isra_0(param_2,local_3b8,param_5,&__rtld_env_path_list,&local_3a0,
                                   local_388,param_1,&local_3a1);
          plVar10 = local_3a0;
          if (iVar5 != -1) goto LAB_007ad0de;
          if (param_1 != (long *)0x0) goto LAB_007ad089;
LAB_007ad0d5:
          plVar10 = local_3a0;
          if (iVar5 != -1) goto LAB_007ad0de;
        }
LAB_007ad219:
        local_3a0 = (long *)0x0;
        if (((((param_5 & 0x4000000) == 0) || (__libc_enable_secure == 0)) &&
            (_dl_inhibit_cache == 0)) &&
           (plVar10 = (long *)_dl_load_cache_lookup(param_2), plVar10 != (long *)0x0)) {
          if (param_1 == (long *)0x0) {
            if ((_dl_ns[0x3ed] & 8) != 0) goto LAB_007ad369;
LAB_007ad26a:
            iVar5 = open_verify_constprop_0(plVar10,local_388,&local_3a1);
            if (iVar5 != -1) goto LAB_007ad0de;
          }
          else {
            if ((*(byte *)((long)param_1 + 0x3ed) & 8) == 0) goto LAB_007ad26a;
LAB_007ad369:
            if (((((plVar10[1] != 0x756e696c2d34365f || *plVar10 != 0x3638782f62696c2f) ||
                  ((int)plVar10[2] != 0x6e672d78)) || (*(short *)((long)plVar10 + 0x14) != 0x2f75))
                && (((plVar10[1] != 0x2d34365f3638782f || *plVar10 != 0x62696c2f7273752f ||
                     (plVar10[2] != 0x6e672d78756e696c)) || ((short)plVar10[3] != 0x2f75)))) &&
               ((((int)*plVar10 != 0x62696c2f || (*(char *)((long)plVar10 + 4) != '/')) &&
                ((*plVar10 != 0x62696c2f7273752f || ((char)plVar10[1] != '/'))))))
            goto LAB_007ad26a;
          }
          free(plVar10);
        }
        plVar8 = param_1;
        plVar10 = local_3a0;
        if (((param_1 == (long *)0x0) &&
            (plVar8 = (long *)(&_dl_ns)[param_6 * 0x14], plVar8 == (long *)0x0)) ||
           ((*(byte *)((long)plVar8 + 0x3ed) & 8) == 0)) {
          iVar5 = -1;
          if (__rtld_search_dirs != -1) {
            iVar5 = open_path_isra_0(param_2,local_3b8,param_5,&__rtld_search_dirs,&local_3a0,
                                     local_388,plVar8,&local_3a1);
            plVar10 = local_3a0;
          }
        }
        else {
          iVar5 = -1;
        }
      }
LAB_007ad0de:
      local_3a0 = plVar10;
      if ((_dl_debug_mask & 1) != 0) {
        _dl_debug_printf(&DAT_0081a1ca);
      }
      if ((param_5 & 0x10000000) != 0) {
        param_1 = (long *)0x0;
      }
      if (iVar5 != -1) goto LAB_007acf35;
      goto LAB_007acf92;
    }
    if (param_1 == (long *)0x0) goto LAB_007acf71;
LAB_007acef4:
    local_3a0 = (long *)expand_dynamic_string_token(param_1,param_2);
  }
  else {
    if (param_1 != (long *)0x0) {
      pcVar7 = (char *)param_1[1];
      if ((*pcVar7 == '\0') && (pcVar7 = *(char **)_dl_argv, pcVar7 == (char *)0x0)) {
        pcVar7 = "<main program>";
      }
      pcVar11 = "\nfile=%s [%lu];  needed by %s [%lu]\n";
      if ((param_5 & 0x10000000) != 0) {
        pcVar11 = "\nfile=%s [%lu];  dynamically loaded by %s [%lu]\n";
      }
      _dl_debug_printf(pcVar11,param_2,param_6,pcVar7,param_1[6]);
      local_3a1 = '\0';
      pcVar7 = strchr(param_2,0x2f);
      if (pcVar7 == (char *)0x0) {
        sVar9 = strlen(param_2);
        local_3b8 = sVar9 + 1;
        if ((_dl_debug_mask & 1) != 0) goto LAB_007ad33c;
        goto LAB_007ad03a;
      }
      goto LAB_007acef4;
    }
    local_3a1 = '\0';
    pcVar7 = strchr(param_2,0x2f);
    if (pcVar7 == (char *)0x0) {
      sVar9 = strlen(param_2);
      local_3b8 = sVar9 + 1;
      if ((uVar2 & 1) != 0) {
LAB_007ad33c:
        _dl_debug_printf("find library=%s [%lu]; searching\n",param_2,param_6);
        goto LAB_007ad031;
      }
      goto LAB_007ad616;
    }
LAB_007acf71:
    local_3a0 = (long *)strdup(param_2);
  }
  if (local_3a0 != (long *)0x0) {
    iVar5 = open_verify_constprop_1(local_3a0,local_388,&local_3a1);
    if (iVar5 != -1) {
      if ((param_5 & 0x10000000) != 0) {
        param_1 = (long *)0x0;
      }
LAB_007acf35:
      local_398[0] = __libc_stack_end;
      plVar8 = (long *)_dl_map_object_from_fd_constprop_0
                                 (param_2,iVar5,local_388,local_3a0,param_1,param_3,param_5,
                                  local_398,param_6);
      return plVar8;
    }
    free(local_3a0);
  }
  if ((param_5 & 0x10000000) != 0) {
    param_1 = (long *)0x0;
  }
LAB_007acf92:
  if ((param_4 == 0) || ((_dl_debug_mask & 0x800) != 0)) {
    if (local_3a1 == '\0') {
                    /* WARNING: Subroutine does not return */
      _dl_signal_error(*(undefined4 *)(in_FS_OFFSET + -0x58),param_2,0,
                       "cannot open shared object file");
    }
                    /* WARNING: Subroutine does not return */
    _dl_signal_error(0,param_2,0,"wrong ELF class: ELFCLASS32");
  }
  pcVar7 = strdup(param_2);
  if ((pcVar7 != (char *)0x0) &&
     (plVar8 = (long *)_dl_new_object(pcVar7,param_2,param_3,param_1,param_5,param_6),
     plVar8 != (long *)0x0)) {
    *(ushort *)((long)plVar8 + 0x31c) = *(ushort *)((long)plVar8 + 0x31c) | 0x2004;
    plVar8[0x62] = (long)&dummy_bucket_7;
    *(undefined4 *)((long)plVar8 + 0x2f4) = 1;
    _dl_add_to_namespace_list(plVar8,param_6);
    return plVar8;
  }
  free(pcVar7);
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0xc,param_2,0,"cannot create shared object descriptor");
}

