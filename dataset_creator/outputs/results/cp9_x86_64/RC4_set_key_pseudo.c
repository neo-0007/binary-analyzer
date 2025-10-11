
void RC4_set_key(RC4_KEY *key,int len,uchar *data)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 in_register_00000034;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = CONCAT44(in_register_00000034,len);
  lVar5 = -lVar4;
  uVar7 = 0;
  if ((OPENSSL_ia32cap_P >> 0x14 & 1) == 0) {
    do {
      key->data[uVar7] = (uint)uVar7;
      cVar3 = (char)uVar7;
      uVar7 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar8 = 0;
    uVar7 = 0;
    lVar6 = lVar5;
    do {
      uVar7 = (ulong)(byte)((char)uVar7 + data[lVar6 + lVar4] + (char)key->data[uVar8]);
      lVar6 = lVar6 + 1;
      uVar2 = key->data[uVar7];
      if (lVar6 == 0) {
        lVar6 = lVar5;
      }
      key->data[uVar7] = key->data[uVar8];
      key->data[uVar8] = uVar2;
      cVar3 = (char)uVar8;
      uVar8 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
  }
  else {
    do {
      cVar3 = (char)uVar7;
      *(char *)((long)key->data + uVar7) = cVar3;
      uVar7 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar8 = 0;
    uVar7 = 0;
    lVar6 = lVar5;
    do {
      cVar3 = *(char *)((long)key->data + uVar8);
      uVar7 = (ulong)(byte)((char)uVar7 + data[lVar6 + lVar4] + cVar3);
      lVar6 = lVar6 + 1;
      uVar1 = *(undefined1 *)((long)key->data + uVar7);
      if (lVar6 == 0) {
        lVar6 = lVar5;
      }
      *(char *)((long)key->data + uVar7) = cVar3;
      *(undefined1 *)((long)key->data + uVar8) = uVar1;
      cVar3 = (char)uVar8;
      uVar8 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    key->data[0x40] = 0xffffffff;
  }
  key->x = 0;
  key->y = 0;
  return;
}

