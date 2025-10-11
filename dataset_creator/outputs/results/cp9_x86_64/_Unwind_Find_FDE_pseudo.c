
long _Unwind_Find_FDE(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  undefined4 local_40;
  
  if (any_objects_registered == 0) {
LAB_006c5f72:
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 1;
    local_68 = param_1;
    iVar4 = dl_iterate_phdr(_Unwind_IteratePhdrCallback,&local_68);
    if (iVar4 < 0) {
      return 0;
    }
    if (local_48 == 0) {
      return 0;
    }
    *param_2 = local_60;
    param_2[1] = local_58;
    param_2[2] = local_50;
    return local_48;
  }
  pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  for (puVar8 = seen_objects; puVar8 != (ulong *)0x0; puVar8 = (ulong *)puVar8[5]) {
    if (*puVar8 <= param_1) {
      lVar5 = search_object(puVar8,param_1);
      if (lVar5 != 0) goto LAB_006c6045;
      break;
    }
  }
  do {
    puVar8 = unseen_objects;
    if (unseen_objects == (ulong *)0x0) {
      pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
      goto LAB_006c5f72;
    }
    unseen_objects = (ulong *)unseen_objects[5];
    lVar5 = search_object(puVar8,param_1);
    puVar7 = (ulong *)&seen_objects;
    puVar6 = seen_objects;
    if (seen_objects != (ulong *)0x0) {
      do {
        if (*puVar6 < *puVar8) break;
        puVar7 = puVar6 + 5;
        puVar6 = (ulong *)puVar6[5];
      } while (puVar6 != (ulong *)0x0);
    }
    puVar8[5] = (ulong)puVar6;
    *puVar7 = (ulong)puVar8;
  } while (lVar5 == 0);
LAB_006c6045:
  pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  uVar9 = puVar8[1];
  uVar1 = puVar8[2];
  uVar3 = (ushort)puVar8[4] >> 3;
  *param_2 = uVar9;
  param_2[1] = uVar1;
  if ((puVar8[4] & 4) != 0) {
    uVar3 = get_cie_encoding((lVar5 + 4) - (long)*(int *)(lVar5 + 4));
  }
  if ((byte)uVar3 != 0xff) {
    bVar2 = (byte)uVar3 & 0x70;
    if (bVar2 == 0x20) goto LAB_006c60a0;
    if (bVar2 < 0x21) {
      if ((uVar3 & 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      uVar9 = uVar1;
      if (bVar2 == 0x30) goto LAB_006c60a0;
      if (bVar2 != 0x50) {
                    /* WARNING: Subroutine does not return */
        _Unwind_Find_FDE_cold();
      }
    }
  }
  uVar9 = 0;
LAB_006c60a0:
  read_encoded_value_with_base(uVar3 & 0xff,uVar9,lVar5 + 8,&local_68);
  param_2[2] = local_68;
  return lVar5;
}

