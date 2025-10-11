
/* std::numpunct<wchar_t>::_M_initialize_numpunct(__locale_struct*) */

void __thiscall
std::numpunct<wchar_t>::_M_initialize_numpunct(numpunct<wchar_t> *this,__locale_struct *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  
  if (*(long *)(this + 0x10) == 0) {
    puVar6 = (undefined8 *)operator_new(0x150);
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR____numpunct_cache_009276c8;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    *(undefined1 *)(puVar6 + 0x29) = 0;
    *(undefined8 **)(this + 0x10) = puVar6;
  }
  if (param_1 == (__locale_struct *)0x0) {
    lVar8 = *(long *)(this + 0x10);
    *(undefined1 **)(lVar8 + 0x10) = &DAT_008343a2;
    *(undefined8 *)(lVar8 + 0x48) = 0x2c0000002e;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined1 *)(lVar8 + 0x20) = 0;
    puVar1 = __num_base::_S_atoms_out;
    lVar4 = 0;
    do {
      *(int *)(lVar8 + 0x50 + lVar4 * 4) = (int)(char)puVar1[lVar4];
      puVar2 = __num_base::_S_atoms_in;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x24);
    lVar4 = 0;
    do {
      *(int *)(lVar8 + 0xe0 + lVar4 * 4) = (int)(char)puVar2[lVar4];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x1a);
  }
  else {
    pcVar3 = nl_langinfo_l(0x10003,param_1);
    *(int *)(*(long *)(this + 0x10) + 0x48) = (int)pcVar3;
    pcVar3 = nl_langinfo_l(0x10004,param_1);
    lVar8 = *(long *)(this + 0x10);
    *(int *)(lVar8 + 0x4c) = (int)pcVar3;
    if ((int)pcVar3 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined1 **)(lVar8 + 0x10) = &DAT_008343a2;
      *(undefined1 *)(lVar8 + 0x20) = 0;
      *(undefined4 *)(lVar8 + 0x4c) = 0x2c;
    }
    else {
      pcVar3 = nl_langinfo_l(0x10002,param_1);
      sVar5 = strlen(pcVar3);
      if (sVar5 == 0) {
        lVar8 = *(long *)(this + 0x10);
        *(undefined1 **)(lVar8 + 0x10) = &DAT_008343a2;
        *(undefined1 *)(lVar8 + 0x20) = 0;
      }
      else {
                    /* try { // try from 0062a8a2 to 0062a8a6 has its CatchHandler @ 0062a8c2 */
        pvVar7 = operator_new__(sVar5 + 1);
        pvVar7 = memcpy(pvVar7,pcVar3,sVar5 + 1);
        lVar8 = *(long *)(this + 0x10);
        *(void **)(lVar8 + 0x10) = pvVar7;
      }
      *(size_t *)(lVar8 + 0x18) = sVar5;
    }
  }
  *(undefined8 *)(lVar8 + 0x30) = 4;
  *(undefined **)(lVar8 + 0x28) = &DAT_00813900;
  *(wchar_t **)(lVar8 + 0x38) = L"false";
  *(undefined8 *)(lVar8 + 0x40) = 5;
  return;
}

