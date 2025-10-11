
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_tunable_set_hwcaps(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  char cVar8;
  
  pcVar7 = (char *)*param_1;
  cVar8 = *pcVar7;
  do {
    if ((cVar8 == ',') || (pcVar3 = pcVar7, cVar8 == '\0')) {
      lVar6 = 1;
      goto switchD_007860df_caseD_9;
    }
    do {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      if (*pcVar1 == '\0') break;
    } while (*pcVar1 != ',');
    lVar4 = (long)pcVar3 - (long)pcVar7;
    lVar6 = lVar4 + 1;
    if (cVar8 == '-') {
      pcVar3 = pcVar7 + 1;
      switch(lVar4) {
      case 4:
        iVar2 = __memcmp_sse2(pcVar3,&DAT_008262e6,3);
        if (iVar2 == 0) {
          DAT_0093deec = DAT_0093deec & 0xefffffff;
          lVar6 = 5;
        }
        else {
          iVar2 = __memcmp_sse2(pcVar3,&DAT_008262ea,3);
          if (iVar2 == 0) {
            _DAT_0093def0 = _DAT_0093def0 & 0xfffffeff;
            lVar6 = 5;
          }
          else {
            iVar2 = __memcmp_sse2(pcVar3,&DAT_008262ee,3);
            if (iVar2 == 0) {
              DAT_0093deec = DAT_0093deec & 0xffffefff;
              lVar6 = 5;
            }
            else {
              iVar2 = __memcmp_sse2(pcVar3,&DAT_008262f2,3);
              if (iVar2 == 0) {
                _DAT_0093def0 = _DAT_0093def0 & 0xefffffff;
                lVar6 = 5;
              }
              else {
                iVar2 = __memcmp_sse2(pcVar3,&DAT_008262f6,3);
                if (iVar2 == 0) {
                  _DAT_0093df10 = _DAT_0093df10 & 0xffefffff;
                  lVar6 = 5;
                }
                else {
                  lVar6 = 5;
                  iVar2 = __memcmp_sse2(pcVar3,&DAT_008262fa,3);
                  if (iVar2 == 0) {
                    DAT_0093df08 = DAT_0093df08 & 0xfffff7ff;
                  }
                }
              }
            }
          }
        }
        break;
      case 5:
switchD_0078612c_caseD_5:
        iVar2 = __memcmp_sse2(pcVar3,&DAT_008262fe,4);
        if (iVar2 == 0) {
          DAT_0093df08 = DAT_0093df08 & 0xffffffdf;
        }
        else {
          iVar2 = __memcmp_sse2(pcVar3,&DAT_00826303,4);
          if (iVar2 == 0) {
            DAT_0093df08 = DAT_0093df08 & 0xfffffff7;
          }
          else {
            iVar2 = __memcmp_sse2(pcVar3,&DAT_00826308,4);
            if (iVar2 == 0) {
              DAT_0093df08 = DAT_0093df08 & 0xfffffeff;
            }
            else {
              iVar2 = __memcmp_sse2(pcVar3,&DAT_0082630d,4);
              if (iVar2 == 0) {
                _DAT_0093def0 = _DAT_0093def0 & 0xffff7fff;
              }
              else {
                iVar2 = __memcmp_sse2(pcVar3,"ERMS",4);
                if (iVar2 == 0) {
                  DAT_0093df08 = DAT_0093df08 & 0xfffffdff;
                }
                else {
                  iVar2 = __memcmp_sse2(pcVar3,&DAT_00826312,4);
                  if (iVar2 == 0) {
                    DAT_0093df2c = DAT_0093df2c & 0xfffeffff;
                  }
                  else {
                    iVar2 = __memcmp_sse2(pcVar3,&DAT_00826317,4);
                    if (iVar2 == 0) {
                      _DAT_0093def0 = _DAT_0093def0 & 0xfbffffff;
                    }
                    else {
                      iVar2 = __memcmp_sse2(pcVar3,&DAT_0082631c,4);
                      if (iVar2 == 0) {
                        DAT_0093dff4 = DAT_0093dff4 & 0xffffffbf;
                      }
                      else {
                        iVar2 = __memcmp_sse2(pcVar3,&DAT_00826321,4);
                        if (iVar2 == 0) {
                          DAT_0093dff4 = DAT_0093dff4 & 0xffffff7f;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case 6:
switchD_0078612c_caseD_6:
        iVar2 = __memcmp_sse2(pcVar3,"LZCNT",5);
        if (iVar2 == 0) {
          DAT_0093df2c = DAT_0093df2c & 0xffffffdf;
        }
        else {
          iVar2 = __memcmp_sse2(pcVar3,"MOVBE",5);
          if (iVar2 == 0) {
            DAT_0093deec = DAT_0093deec & 0xffbfffff;
          }
          else {
            iVar2 = __memcmp_sse2(pcVar3,"SHSTK",5);
            if (iVar2 == 0) {
              _DAT_0093df0c = _DAT_0093df0c & 0xffffff7f;
            }
            else {
              iVar2 = __memcmp_sse2(pcVar3,"SSSE3",5);
              if (iVar2 == 0) {
                DAT_0093deec = DAT_0093deec & 0xfffffdff;
              }
              else {
                iVar2 = __memcmp_sse2(pcVar3,"XSAVE",5);
                if (iVar2 == 0) {
                  DAT_0093deec = DAT_0093deec & 0xfbffffff;
                }
              }
            }
          }
        }
        break;
      case 7:
switchD_0078612c_caseD_7:
        iVar2 = __memcmp_sse2(pcVar3,"POPCNT",6);
        if (iVar2 == 0) {
          DAT_0093deec = DAT_0093deec & 0xff7fffff;
        }
        else {
          iVar2 = __memcmp_sse2(pcVar3,"SSE4_1",6);
          if (iVar2 == 0) {
            DAT_0093deec = DAT_0093deec & 0xfff7ffff;
          }
          else {
            iVar2 = __memcmp_sse2(pcVar3,"SSE4_2",6);
            if (iVar2 == 0) {
              DAT_0093deec = DAT_0093deec & 0xffefffff;
            }
            else {
              iVar2 = __memcmp_sse2(pcVar3,&DAT_0082634c,6);
              if (iVar2 == 0) {
                _DAT_0093e000 = (ulong)DAT_0093e008;
                _DAT_0093df44 = _DAT_0093df44 & 0xfffffffd;
              }
            }
          }
        }
        break;
      case 8:
switchD_0078612c_caseD_8:
        iVar2 = __memcmp_sse2(pcVar3,"AVX512F",7);
        if (iVar2 == 0) {
          DAT_0093df08 = DAT_0093df08 & 0xfffeffff;
        }
        else {
          iVar2 = __memcmp_sse2(pcVar3,&DAT_0082635b,7);
          if (iVar2 == 0) {
            DAT_0093deec = DAT_0093deec & 0xf7ffffff;
          }
        }
        break;
      case 9:
        iVar2 = __memcmp_sse2(pcVar3,"AVX512CD",8);
        if (iVar2 == 0) {
          DAT_0093df08 = DAT_0093df08 & 0xefffffff;
          pcVar7 = pcVar7 + 10;
          cVar8 = *pcVar7;
          goto joined_r0x00786358;
        }
        iVar2 = __memcmp_sse2(pcVar3,"AVX512BW",8);
        if (iVar2 == 0) {
          DAT_0093df08 = DAT_0093df08 & 0xbfffffff;
          lVar6 = 10;
        }
        else {
          iVar2 = __memcmp_sse2(pcVar3,"AVX512DQ",8);
          if (iVar2 == 0) {
            DAT_0093df08 = DAT_0093df08 & 0xfffdffff;
            lVar6 = 10;
          }
          else {
            iVar2 = __memcmp_sse2(pcVar3,"AVX512ER",8);
            if (iVar2 == 0) {
              DAT_0093df08 = DAT_0093df08 & 0xf7ffffff;
              lVar6 = 10;
            }
            else {
              iVar2 = __memcmp_sse2(pcVar3,"AVX512PF",8);
              if (iVar2 == 0) {
                DAT_0093df08 = DAT_0093df08 & 0xfbffffff;
                lVar6 = 10;
              }
              else {
                iVar2 = __memcmp_sse2(pcVar3,"AVX512VL",8);
                if (iVar2 == 0) {
                  DAT_0093df08 = DAT_0093df08 & 0x7fffffff;
                  lVar6 = 10;
                }
                else {
                  lVar6 = 10;
                  iVar2 = __memcmp_sse2(pcVar3,"Slow_BSF",8);
                  if (iVar2 == 0) {
                    DAT_0093dff4 = DAT_0093dff4 & 0xfffffffb;
                    lVar6 = 10;
                  }
                }
              }
            }
          }
        }
        break;
      case 0xc:
        goto switchD_0078612c_caseD_c;
      case 0x10:
        goto switchD_0078612c_caseD_10;
      case 0x11:
        goto switchD_0078612c_caseD_11;
      case 0x13:
        goto switchD_0078612c_caseD_13;
      case 0x14:
        goto switchD_0078612c_caseD_14;
      case 0x15:
        goto switchD_0078612c_caseD_15;
      case 0x18:
        goto switchD_0078612c_caseD_18;
      case 0x19:
        goto switchD_0078612c_caseD_19;
      case 0x1b:
        goto switchD_0078612c_caseD_1b;
      }
      goto switchD_007860df_caseD_9;
    }
    pcVar3 = pcVar7;
    switch(lVar4) {
    case 4:
      if (cVar8 == '-') goto switchD_0078612c_caseD_5;
      break;
    case 5:
      if (cVar8 == '-') goto switchD_0078612c_caseD_6;
      break;
    case 6:
      if (cVar8 == '-') goto switchD_0078612c_caseD_7;
      break;
    case 7:
      if (cVar8 == '-') goto switchD_0078612c_caseD_8;
      break;
    case 8:
      lVar6 = 9;
      iVar2 = __memcmp_sse2(pcVar7,"Slow_BSF",8);
      if (iVar2 != 0) break;
      DAT_0093dff4 = DAT_0093dff4 | 4;
      pcVar7 = pcVar7 + 9;
      cVar8 = *pcVar7;
      goto joined_r0x00786358;
    case 0xb:
switchD_0078612c_caseD_c:
      iVar2 = __memcmp_sse2(pcVar3,"Prefer_ERMS",0xb);
      if (iVar2 == 0) {
        uVar5 = DAT_0093dff4 | 0x800;
        DAT_0093dff4 = DAT_0093dff4 & 0xfffff7ff;
        if (cVar8 != '-') {
          DAT_0093dff4 = uVar5;
        }
        cVar8 = pcVar7[lVar6];
joined_r0x00786358:
        pcVar7 = pcVar7 + lVar6;
        goto joined_r0x00786358;
      }
      iVar2 = __memcmp_sse2(pcVar3,"Prefer_FSRM",0xb);
      if (iVar2 == 0) {
        uVar5 = DAT_0093dff4 | 0x4000;
        DAT_0093dff4 = DAT_0093dff4 & 0xffffbfff;
        if (cVar8 != '-') {
          DAT_0093dff4 = uVar5;
        }
        pcVar7 = pcVar7 + lVar6;
        cVar8 = *pcVar7;
        goto joined_r0x00786358;
      }
      iVar2 = __memcmp_sse2(pcVar3,"Slow_SSE4_2",0xb);
      if (iVar2 == 0) {
        if (cVar8 == '-') {
          DAT_0093dff4 = DAT_0093dff4 & 0xfffffeff;
        }
        else if ((DAT_0093deec & 0x100000) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x100;
        }
      }
      break;
    case 0xf:
switchD_0078612c_caseD_10:
      iVar2 = __memcmp_sse2(pcVar3,"Fast_Rep_String",0xf);
      if (iVar2 == 0) {
        uVar5 = DAT_0093dff4 | 1;
        DAT_0093dff4 = DAT_0093dff4 & 0xfffffffe;
        if (cVar8 != '-') {
          DAT_0093dff4 = uVar5;
        }
        cVar8 = pcVar7[lVar6];
        goto joined_r0x00786358;
      }
      break;
    case 0x10:
switchD_0078612c_caseD_11:
      iVar2 = __memcmp_sse2(pcVar3,"Prefer_No_AVX512",0x10);
      if (iVar2 == 0) {
        if (cVar8 == '-') {
          DAT_0093dff4 = DAT_0093dff4 & 0xffffefff;
        }
        else if ((DAT_0093df08 & 0x10000) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x1000;
        }
      }
      break;
    case 0x12:
switchD_0078612c_caseD_13:
      iVar2 = __memcmp_sse2(pcVar3,"Fast_Copy_Backward",0x12);
      if (iVar2 == 0) {
        uVar5 = DAT_0093dff4 | 2;
        DAT_0093dff4 = DAT_0093dff4 & 0xfffffffd;
        if (cVar8 != '-') {
          DAT_0093dff4 = uVar5;
        }
        cVar8 = pcVar7[lVar6];
joined_r0x00786275:
        pcVar7 = pcVar7 + lVar6;
        goto joined_r0x00786358;
      }
      break;
    case 0x13:
switchD_0078612c_caseD_14:
      iVar2 = __memcmp_sse2(pcVar3,"Fast_Unaligned_Load",0x13);
      if (iVar2 == 0) {
        uVar5 = DAT_0093dff4 | 8;
        DAT_0093dff4 = DAT_0093dff4 & 0xfffffff7;
        if (cVar8 != '-') {
          DAT_0093dff4 = uVar5;
        }
        cVar8 = pcVar7[lVar6];
        goto joined_r0x00786275;
      }
      iVar2 = __memcmp_sse2(pcVar3,"Fast_Unaligned_Copy",0x13);
      if (iVar2 == 0) {
        uVar5 = DAT_0093dff4 | 0x20;
        DAT_0093dff4 = DAT_0093dff4 & 0xffffffdf;
        if (cVar8 != '-') {
          DAT_0093dff4 = uVar5;
        }
      }
      break;
    case 0x14:
switchD_0078612c_caseD_15:
      iVar2 = __memcmp_sse2(pcVar3,"Prefer_No_VZEROUPPER",0x14);
      if (iVar2 == 0) {
        if (cVar8 == '-') {
          DAT_0093dff4 = DAT_0093dff4 & 0xfffffbff;
        }
        else if ((DAT_0093deec & 0x10000000) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x400;
        }
      }
      break;
    case 0x17:
switchD_0078612c_caseD_18:
      iVar2 = __memcmp_sse2(pcVar3,"AVX_Fast_Unaligned_Load",0x17);
      if (iVar2 == 0) {
        if (cVar8 == '-') {
          DAT_0093dff4 = DAT_0093dff4 & 0xfffffdff;
        }
        else if ((DAT_0093deec & 0x10000000) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x200;
        }
      }
      break;
    case 0x18:
switchD_0078612c_caseD_19:
      iVar2 = __memcmp_sse2(pcVar3,"MathVec_Prefer_No_AVX512",0x18);
      if (iVar2 == 0) {
        if (cVar8 == '-') {
          DAT_0093dff4 = DAT_0093dff4 & 0xffffdfff;
        }
        else if ((DAT_0093df08 & 0x10000) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x2000;
        }
      }
      break;
    case 0x1a:
switchD_0078612c_caseD_1b:
      iVar2 = __memcmp_sse2(pcVar3,"Prefer_PMINUB_for_stringop",0x1a);
      if (iVar2 == 0) {
        if (cVar8 == '-') {
          DAT_0093dff4 = DAT_0093dff4 & 0xffffffef;
        }
        else if ((_DAT_0093def0 & 0x4000000) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x10;
        }
      }
    }
switchD_007860df_caseD_9:
    pcVar7 = pcVar7 + lVar6;
    cVar8 = *pcVar7;
joined_r0x00786358:
    if (cVar8 == '\0') {
      return;
    }
  } while( true );
}

