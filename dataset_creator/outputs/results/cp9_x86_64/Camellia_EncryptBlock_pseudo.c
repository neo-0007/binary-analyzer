
void Camellia_EncryptBlock(uint param_1)

{
  Camellia_EncryptBlock_Rounds((0x80 < param_1) + '\x03');
  return;
}

