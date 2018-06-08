import {
    NativeModules,
} from 'react-native';

const MobIMChatIOS = NativeModules.IMChatSection;

const IMChatPage = () =>{
    return MobIMChatIOS.IMChatPage();
}

export {
    IMChatPage,
}