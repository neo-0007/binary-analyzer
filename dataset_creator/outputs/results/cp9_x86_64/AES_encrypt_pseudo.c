
void AES_encrypt(uchar *in,uchar *out,AES_KEY *key)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  long alStack_68 [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  lVar4 = -(-((long)key + (-0x3f - (long)auStack_40)) & 0x3c0U);
  *(uchar **)((long)alStack_68 + lVar4 + 0x18) = out;
  *(BADSPACEBASE **)(auStack_48 + lVar4) = register0x00000020;
  iVar1 = key->rounds;
  uVar2 = *(undefined4 *)(in + 4);
  uVar6 = *(undefined4 *)(in + 8);
  uVar5 = *(undefined4 *)(in + 0xc);
  *(AES_KEY **)((long)alStack_68 + lVar4 + 8) = key;
  *(ulong *)((long)alStack_68 + lVar4 + 0x10) = (long)key->rd_key + (ulong)(uint)(iVar1 << 4);
  *(undefined8 *)((long)alStack_68 + lVar4) = 0x487c9f;
  uVar5 = _x86_64_AES_encrypt_compact(in,out,uVar5);
  puVar3 = *(undefined4 **)((long)alStack_68 + lVar4 + 0x18);
  *puVar3 = uVar5;
  puVar3[1] = uVar2;
  puVar3[2] = uVar6;
  puVar3[3] = extraout_EDX;
  return;
}

