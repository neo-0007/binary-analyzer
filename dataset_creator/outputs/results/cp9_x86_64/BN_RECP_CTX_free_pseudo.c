
void BN_RECP_CTX_free(BN_RECP_CTX *recp)

{
  if (recp == (BN_RECP_CTX *)0x0) {
    return;
  }
  BN_free(&recp->N);
  BN_free(&recp->Nr);
  if ((recp->flags & 1) == 0) {
    return;
  }
  CRYPTO_free(recp);
  return;
}

