﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3;
struct Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70;
struct InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB;
struct InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2;
struct NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686;
struct NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3;
struct NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD;
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035;
struct NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090;
struct ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70;
struct unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902;
struct unitytls_key_ref_t6BD91D013DF11047C53738FEEB12CE290FDC71A2;
struct unitytls_tlsctx_tF8BBCBFE1E957B846442DED65ECB89BC5307DEAE;
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17;
struct unitytls_x509name_t8A1108C917795D8FE946B50769ACE51489C7BF5D;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 
{
	uint64_t ___handle;
};
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 
{
	uint64_t ___handle;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void CDECL ReversePInvokeWrapper_BaselibNetworkInterface_AbortSendMessage_m72B7BF253EF54897773EB3D0E71087F1D6A3CC4E(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData);
extern "C" int32_t CDECL ReversePInvokeWrapper_BaselibNetworkInterface_BeginSendMessage_mA7B98FB9E60EE6B551BDED079C19F919D868CDC5(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, int32_t ___2_requiredPayloadSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_BaselibNetworkInterface_EndSendMessage_m8F4442A383ABE0C7351E099F4802369F27034230(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_address, intptr_t ___2_userData, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_sendQueueHandle);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___0_language);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data);
extern "C" void CDECL ReversePInvokeWrapper_FragmentationPipelineStage_InitializeConnection_mF3BBFB71F779AC858B1774CCBFB60119AA63556F(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_FragmentationPipelineStage_Receive_mC82A468D1E984B46DBFA86CFB0881405BB818B9F(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_FragmentationPipelineStage_Send_m371D83ABF5F657F48C1C953FD7F4FC17EE9AFB5F(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B(intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status);
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722(intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status);
extern "C" int64_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_Control_mA7B1C493171314C6F02CAC5F73EB7CB94B86ED78(intptr_t ___0_instance, int32_t ___1_command, int64_t ___2_arg);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_OnRead_m8888AD0EA2D55D9FFE183BC63D4023BC621941F9(intptr_t ___0_instance, intptr_t ___1_data, int32_t ___2_dataLength, int32_t* ___3_wantMore);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_OnWrite_mD90183BD125599306AAF4E74E941A3983027C575(intptr_t ___0_instance, intptr_t ___1_data, int32_t ___2_dataLength);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSsl_PrintErrorsCallback_m93ED1F9335C5974459F0915323C5527382A83959(intptr_t ___0_str, intptr_t ___1_len, intptr_t ___2_ctx);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeSelectCallback_m5A906B70CBEC53FE7F4208810264D78D4AA26EE4(intptr_t ___0_instance, int32_t ___1_count, intptr_t ___2_sizes, intptr_t ___3_data);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeServerNameCallback_mC76D35B6D2668F93E280D35B5560A06571810857(intptr_t ___0_instance);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeVerifyCallback_m13C23EDCF9CDADF430C5A1664D33DC7621974916(intptr_t ___0_instance, int32_t ___1_preverify_ok, intptr_t ___2_store_ctx);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24(intptr_t ___0_instance, intptr_t ___1_name_ptr, intptr_t* ___2_x509_ptr);
extern "C" void CDECL ReversePInvokeWrapper_NetworkMetricsPipelineStage_InitializeConnection_m10609B2874256E13574523F14FCFB2D91FDFAC8A(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_receiveProcessBuffer, int32_t ___5_receiveProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_NetworkMetricsPipelineStage_Receive_mF27BE0782808504F15963DCF3ED611C74F1FCD35(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_networkPipelineContext, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundReceiveBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_NetworkMetricsPipelineStage_Send_m73A926C8069CE8DF4CEBDA6F929D48C349A7D9FF(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_networkPipelineContext, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundSendBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void CDECL ReversePInvokeWrapper_NullPipelineStage_InitializeConnection_mE4FD4F09D9CFF2E1936797CB78E73320899AED0A(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_NullPipelineStage_Receive_m8308D590BC7CFA806E9D57D41E719541EFC8B8F7(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_NullPipelineStage_Send_m1B22D7224F96F231918823791DAD77CF1A394552(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___0_arg);
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command);
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_InitializeConnection_m8686B1249C04475707EAA6052847250414CFB95F(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_Receive_m992560BA8E67FEF4121328DF27B4167F9EFC181C(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_Send_mF5B4688D4611998490023B13C3E3978E2B962294(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35(intptr_t ___0_state, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8(intptr_t ___0_state, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command);
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStage_InitializeConnection_mE07E7035736226A1FEE8385D4D8D41C1D9AA9E01(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStage_Receive_mBBC0E56D075494CD82C70AE3865BD8DFD488BCB8(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_SimulatorPipelineStage_Send_mDFCF5F9A898D399559922F0F49043BAF7B07E0E3(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_InitializeConnection_m996F9AF5C36F710832A3BB160BCAB990766A4605(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_Receive_m886BB6915B5EA4AB28D0C639B34D59E6185B251E(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_Send_m874C15AB96635E629A55FB9009ACD0DBA3BFDEB7(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m8CC672A44A8CCFD2A3EB2D9B38A9A134F6EF706B(void* ___0_userData, unitytls_tlsctx_tF8BBCBFE1E957B846442DED65ECB89BC5307DEAE* ___1_ctx, uint8_t* ___2_cn, intptr_t ___3_cnLen, unitytls_x509name_t8A1108C917795D8FE946B50769ACE51489C7BF5D* ___4_caList, intptr_t ___5_caListLen, unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17* ___6_chain, unitytls_key_ref_t6BD91D013DF11047C53738FEEB12CE290FDC71A2* ___7_key, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___8_errorState);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_m068A7DC153B3D2C4F6922B46BC5957CF33AE3450(void* ___0_userData, uint8_t* ___1_buffer, intptr_t ___2_bufferLen, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___3_errorState);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_mC7AE01FAD8A336A6BF11CF8A3EFAC60CF6167E6F(void* ___0_userData, unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 ___1_chain, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___2_errorState);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m74F83CFEE7D8FB7EBD1A1021DCB8945E89382998(void* ___0_userData, uint8_t* ___1_data, intptr_t ___2_bufferLen, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___3_errorState);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B(void* ___0_userData, unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 ___1_cert, uint32_t ___2_result, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___3_errorState);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Connect_m7AC9FFE6828F64EC37D45D3D7397262A702671AE(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Disconnect_mAE7E0BD95A6C237B05460FF54479B0C8580A95E5(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSend_m37FFFC64721982127FC2D9268E49D6547F05366E(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendConnectionAccept_mEAC94D7A5F473685C9806BE15910139E184C0759(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPing_m4E10000A4AFB678C587554AED16DE508FE3AB27B(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPong_m9619FB650811D1E8912EC48CBDA6AF3720A990AF(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Update_mB09684A8C348D0610EA91DF1035F2F4AC6780702(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_InitializeConnection_m8F9879573CB49EB48A57D70E8355B1C99D99BDAF(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Receive_mEAB0067A693541F27F50EC6B0E85FFD58F672D32(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Send_m85598A96582CC98D294248DC63430586E60551B9(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131();


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[77] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_AbortSendMessage_m72B7BF253EF54897773EB3D0E71087F1D6A3CC4E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_BeginSendMessage_mA7B98FB9E60EE6B551BDED079C19F919D868CDC5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_EndSendMessage_m8F4442A383ABE0C7351E099F4802369F27034230),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_InitializeConnection_mF3BBFB71F779AC858B1774CCBFB60119AA63556F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_Receive_mC82A468D1E984B46DBFA86CFB0881405BB818B9F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_Send_m371D83ABF5F657F48C1C953FD7F4FC17EE9AFB5F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_Control_mA7B1C493171314C6F02CAC5F73EB7CB94B86ED78),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_OnRead_m8888AD0EA2D55D9FFE183BC63D4023BC621941F9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_OnWrite_mD90183BD125599306AAF4E74E941A3983027C575),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSsl_PrintErrorsCallback_m93ED1F9335C5974459F0915323C5527382A83959),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeSelectCallback_m5A906B70CBEC53FE7F4208810264D78D4AA26EE4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeServerNameCallback_mC76D35B6D2668F93E280D35B5560A06571810857),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeVerifyCallback_m13C23EDCF9CDADF430C5A1664D33DC7621974916),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NetworkMetricsPipelineStage_InitializeConnection_m10609B2874256E13574523F14FCFB2D91FDFAC8A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NetworkMetricsPipelineStage_Receive_mF27BE0782808504F15963DCF3ED611C74F1FCD35),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NetworkMetricsPipelineStage_Send_m73A926C8069CE8DF4CEBDA6F929D48C349A7D9FF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_InitializeConnection_mE4FD4F09D9CFF2E1936797CB78E73320899AED0A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_Receive_m8308D590BC7CFA806E9D57D41E719541EFC8B8F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_Send_m1B22D7224F96F231918823791DAD77CF1A394552),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_InitializeConnection_m8686B1249C04475707EAA6052847250414CFB95F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_Receive_m992560BA8E67FEF4121328DF27B4167F9EFC181C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_Send_mF5B4688D4611998490023B13C3E3978E2B962294),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_InitializeConnection_mE07E7035736226A1FEE8385D4D8D41C1D9AA9E01),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_Receive_mBBC0E56D075494CD82C70AE3865BD8DFD488BCB8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_Send_mDFCF5F9A898D399559922F0F49043BAF7B07E0E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_InitializeConnection_m996F9AF5C36F710832A3BB160BCAB990766A4605),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_Receive_m886BB6915B5EA4AB28D0C639B34D59E6185B251E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_Send_m874C15AB96635E629A55FB9009ACD0DBA3BFDEB7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m8CC672A44A8CCFD2A3EB2D9B38A9A134F6EF706B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_m068A7DC153B3D2C4F6922B46BC5957CF33AE3450),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_mC7AE01FAD8A336A6BF11CF8A3EFAC60CF6167E6F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m74F83CFEE7D8FB7EBD1A1021DCB8945E89382998),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Connect_m7AC9FFE6828F64EC37D45D3D7397262A702671AE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Disconnect_mAE7E0BD95A6C237B05460FF54479B0C8580A95E5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSend_m37FFFC64721982127FC2D9268E49D6547F05366E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendConnectionAccept_mEAC94D7A5F473685C9806BE15910139E184C0759),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPing_m4E10000A4AFB678C587554AED16DE508FE3AB27B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPong_m9619FB650811D1E8912EC48CBDA6AF3720A990AF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Update_mB09684A8C348D0610EA91DF1035F2F4AC6780702),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_InitializeConnection_m8F9879573CB49EB48A57D70E8355B1C99D99BDAF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Receive_mEAB0067A693541F27F50EC6B0E85FFD58F672D32),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Send_m85598A96582CC98D294248DC63430586E60551B9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131),
};
