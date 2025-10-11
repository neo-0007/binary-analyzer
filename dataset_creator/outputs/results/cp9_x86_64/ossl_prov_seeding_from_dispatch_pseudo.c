
undefined8 ossl_prov_seeding_from_dispatch(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 1;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  lVar6 = c_get_nonce;
  lVar7 = c_cleanup_nonce;
  lVar8 = c_cleanup_entropy;
  lVar9 = c_get_entropy;
  do {
    if (iVar5 == 0x67) {
      if (lVar6 == 0) {
        bVar2 = true;
        lVar6 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar6) goto LAB_00439d6d;
LAB_00439d40:
      iVar5 = param_1[4];
    }
    else {
      if (iVar5 < 0x68) {
        if (iVar5 == 0x65) {
          if (lVar9 == 0) {
            bVar4 = true;
            lVar9 = *(long *)(param_1 + 2);
          }
          else if (*(long *)(param_1 + 2) != lVar9) {
LAB_00439d6d:
            if (bVar1) {
              c_cleanup_nonce = lVar7;
            }
            if (bVar2) {
              c_get_nonce = lVar6;
            }
            if (bVar3) {
              c_cleanup_entropy = lVar8;
            }
            if (bVar4) {
              c_get_entropy = lVar9;
            }
            return 0;
          }
        }
        else if (iVar5 == 0x66) {
          if (lVar8 == 0) {
            bVar3 = true;
            lVar8 = *(long *)(param_1 + 2);
          }
          else if (*(long *)(param_1 + 2) != lVar8) goto LAB_00439d6d;
        }
        goto LAB_00439d40;
      }
      if (iVar5 != 0x68) goto LAB_00439d40;
      if (lVar7 == 0) {
        bVar1 = true;
        lVar7 = *(long *)(param_1 + 2);
        goto LAB_00439d40;
      }
      if (*(long *)(param_1 + 2) != lVar7) goto LAB_00439d6d;
      iVar5 = param_1[4];
    }
    param_1 = param_1 + 4;
    if (iVar5 == 0) {
      if (bVar1) {
        c_cleanup_nonce = lVar7;
      }
      if (bVar2) {
        c_get_nonce = lVar6;
      }
      if (bVar3) {
        c_cleanup_entropy = lVar8;
      }
      if (bVar4) {
        c_get_entropy = lVar9;
      }
      return 1;
    }
  } while( true );
}

