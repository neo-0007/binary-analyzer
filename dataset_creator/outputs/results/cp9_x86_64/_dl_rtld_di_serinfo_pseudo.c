
void _dl_rtld_di_serinfo(long *param_1,long *param_2,char param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  char local_58 [4];
  undefined4 local_54;
  long *local_50;
  long lStack_48;
  
  if (param_3 == '\0') {
    lStack_48 = ((ulong)*(uint *)(param_2 + 1) + 1) * 0x10;
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    lStack_48 = 0x10;
    *param_2 = 0;
  }
  lStack_48 = lStack_48 + (long)param_2;
  local_54 = 0;
  plVar5 = param_1;
  local_58[0] = param_3;
  local_50 = param_2;
  if (param_1[0x25] == 0) {
    do {
      lVar4 = plVar5[0x66];
      if (lVar4 != -1) {
        if (lVar4 == 0) {
          if (plVar5[0x17] == 0) {
            plVar5[0x66] = -1;
          }
          else {
            lVar4 = 0;
            if ((*(byte *)((long)plVar5 + 0x31e) & 0x20) != 0) {
              lVar4 = *plVar5;
            }
            cVar3 = decompose_rpath(plVar5 + 0x66,
                                    *(long *)(plVar5[0xd] + 8) + *(long *)(plVar5[0x17] + 8) + lVar4
                                    ,plVar5,"RPATH");
            if (cVar3 != '\0') {
              lVar4 = plVar5[0x66];
              goto LAB_007ad9b0;
            }
          }
        }
        else {
LAB_007ad9b0:
          add_path_constprop_0_isra_0(local_58,lVar4);
        }
      }
      puVar2 = _dl_ns;
      plVar1 = plVar5 + 0x5c;
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((((param_1[6] == 0) && (_dl_ns != (undefined *)0x0)) && ((_dl_ns[0x31c] & 3) != 2)) &&
       ((param_1 != (long *)_dl_ns && (lVar4 = *(long *)(_dl_ns + 0x330), lVar4 != -1)))) {
      if (lVar4 == 0) {
        if (*(long *)(_dl_ns + 0xb8) == 0) {
          *(undefined8 *)(_dl_ns + 0x330) = 0xffffffffffffffff;
        }
        else {
          lVar4 = 0;
          if ((_dl_ns[0x31e] & 0x20) != 0) {
            lVar4 = *(long *)_dl_ns;
          }
          cVar3 = decompose_rpath(_dl_ns + 0x330,
                                  *(long *)(*(long *)(_dl_ns + 0x68) + 8) +
                                  *(long *)(*(long *)(_dl_ns + 0xb8) + 8) + lVar4,_dl_ns,"RPATH");
          if (cVar3 != '\0') {
            lVar4 = *(long *)(puVar2 + 0x330);
            goto LAB_007ada74;
          }
        }
      }
      else {
LAB_007ada74:
        add_path_constprop_0_isra_0(local_58,lVar4);
      }
    }
  }
  add_path_constprop_0_isra_0(local_58,__rtld_env_path_list);
  lVar4 = param_1[0x78];
  if (lVar4 == -1) goto LAB_007ad8ca;
  if (lVar4 == 0) {
    if (param_1[0x25] == 0) {
      param_1[0x78] = -1;
      goto LAB_007ad8ca;
    }
    lVar4 = 0;
    if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
      lVar4 = *param_1;
    }
    cVar3 = decompose_rpath(param_1 + 0x78,
                            *(long *)(param_1[0xd] + 8) + *(long *)(param_1[0x25] + 8) + lVar4,
                            param_1,"RUNPATH");
    if (cVar3 == '\0') goto LAB_007ad8ca;
    lVar4 = param_1[0x78];
  }
  add_path_constprop_0_isra_0(local_58,lVar4);
LAB_007ad8ca:
  if ((*(byte *)((long)param_1 + 0x3ed) & 8) == 0) {
    add_path_constprop_0_isra_0(local_58,__rtld_search_dirs);
  }
  if (param_3 != '\0') {
    *param_2 = *param_2 + ((ulong)*(uint *)(param_2 + 1) + 1) * 0x10;
  }
  return;
}

