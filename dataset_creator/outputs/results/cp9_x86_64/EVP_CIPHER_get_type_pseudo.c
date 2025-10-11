
int EVP_CIPHER_get_type(void)

{
  int n;
  ASN1_OBJECT *a;
  long lVar1;
  
  n = EVP_CIPHER_get_nid();
  if (n != 0x1a5) {
    if (n < 0x1a6) {
      if (n == 0x3d) {
switchD_0040edbd_caseD_290:
        return 0x1e;
      }
      if (n < 0x3e) {
        if ((n != 0x1e) && (n != 0x25)) {
          if (n == 5) {
            return 5;
          }
          goto LAB_0040ede6;
        }
      }
      else if ((n == 0x62) || (n == 0xa6)) {
        n = 0x25;
      }
      else {
        if (n != 0x61) goto LAB_0040ede6;
        n = 5;
      }
    }
    else {
      if (0x293 < n) {
LAB_0040ede6:
        a = OBJ_nid2obj(n);
        lVar1 = OBJ_get0_data(a);
        if (lVar1 == 0) {
          n = 0;
        }
        ASN1_OBJECT_free(a);
        return n;
      }
      if (n < 0x28a) {
        if ((n != 0x1a9) && (n != 0x1ad)) goto LAB_0040ede6;
      }
      else {
        switch(n) {
        case 0x28b:
        case 0x28e:
          n = 0x1a9;
          break;
        case 0x28c:
        case 0x28f:
          n = 0x1ad;
          break;
        default:
          n = 0x1a5;
          break;
        case 0x290:
        case 0x291:
        case 0x292:
        case 0x293:
          goto switchD_0040edbd_caseD_290;
        }
      }
    }
  }
  return n;
}

