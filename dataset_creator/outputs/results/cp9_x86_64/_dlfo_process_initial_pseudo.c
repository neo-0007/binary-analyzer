
long _dlfo_process_initial(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long local_28;
  long lStack_20;
  long local_18;
  long lStack_10;
  
  plVar8 = (long *)_dl_ns;
  if ((_dl_ns[0x31e] & 4) == 0) {
    lVar9 = 0;
    _dl_find_object_from_map(_dl_ns,&local_28);
    piVar6 = (int *)plVar8[0x55];
    piVar1 = piVar6 + (ulong)*(ushort *)(plVar8 + 0x57) * 0xe;
    for (; piVar6 < piVar1; piVar6 = piVar6 + 0xe) {
      if (*piVar6 == 1) {
        if (_dlfo_nodelete_mappings != 0) {
          lVar10 = *plVar8;
          plVar7 = (long *)(_dlfo_nodelete_mappings + lVar9 * 0x20);
          lVar2 = *plVar8;
          *plVar7 = local_28;
          plVar7[1] = lStack_20;
          plVar7[2] = local_18;
          plVar7[3] = lStack_10;
          lVar3 = *(long *)(piVar6 + 4);
          lVar4 = *(long *)(piVar6 + 10);
          *plVar7 = *(long *)(piVar6 + 4) + lVar10;
          plVar7[1] = lVar4 + lVar2 + lVar3;
        }
        lVar9 = lVar9 + 1;
      }
    }
    if (_dl_nns == 0) {
      _dlfo_nodelete_mappings_size = lVar9;
      return 0;
    }
    if (_dl_ns == (undefined *)0x0) {
      _dlfo_nodelete_mappings_size = lVar9;
      return 0;
    }
  }
  else {
    if (_dl_nns == 0) {
      _dlfo_nodelete_mappings_size = _dl_nns;
      return 0;
    }
    lVar9 = 0;
  }
  lVar10 = 0;
  plVar7 = (long *)_dl_ns;
  do {
    if ((plVar8 != plVar7) && ((long *)plVar7[5] == plVar7)) {
      bVar5 = *(byte *)((long)plVar7 + 0x31c) & 3;
      if ((bVar5 == 1) || (*(char *)((long)plVar7 + 799) != '\0')) {
        if (_dlfo_nodelete_mappings != 0) {
          _dl_find_object_from_map(plVar7,_dlfo_nodelete_mappings + lVar9 * 0x20);
        }
        lVar9 = lVar9 + 1;
      }
      else if ((bVar5 == 2) && (lVar10 = lVar10 + 1, _dlfo_loaded_mappings != 0)) {
        _dl_find_object_from_map(plVar7,_dlfo_loaded_mappings + lVar10 * 0x20);
      }
    }
    plVar7 = (long *)plVar7[3];
  } while (plVar7 != (long *)0x0);
  _dlfo_nodelete_mappings_size = lVar9;
  return lVar10;
}

