
undefined8 ossl_cipher_hw_tdes_ede2_initkey(long param_1,const_DES_cblock *param_2)

{
  *(undefined8 *)(param_1 + 0x240) = 0;
  DES_set_key_unchecked(param_2,(DES_key_schedule *)(param_1 + 0xc0));
  DES_set_key_unchecked(param_2 + 1,(DES_key_schedule *)(param_1 + 0x140));
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x138);
  return 1;
}

